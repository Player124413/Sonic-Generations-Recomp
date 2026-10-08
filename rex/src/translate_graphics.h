#pragma once
#include <rex/system/interfaces/graphics.h>

#include <memory>
#include <stdexcept>

#include "translate_presenter.h"

namespace sonic::rex_host {

// Translate mode: the SDK keeps running the guest GPU -- the ring buffer, the
// read pointer writeback, fences, interrupts and shader storage all stay SDK
// code, so the game itself behaves exactly as it does in reference mode -- but
// the window must show the frame our translation renderer produced. The window
// gets its presenter from here, so the presenter that owns the window's
// swapchain is ours, and the SDK's own Xenos presenter stays disconnected.
//
// provider() is null on purpose: the SDK's immediate drawer records into the
// presenter's draw context, and no UI is drawn in this mode yet, so handing out
// a drawer would only create a path that silently does nothing.
class TranslateGraphics final : public rex::system::IGraphicsSystem {
public:
    explicit TranslateGraphics(std::unique_ptr<rex::system::IGraphicsSystem> original)
        : original_(std::move(original)) {
        if (!original_) throw std::invalid_argument("TranslateGraphics requires a real reference backend");
    }
    ~TranslateGraphics() override { Shutdown(); }
    rex::X_STATUS SetupPresentation(rex::ui::WindowedAppContext* context) override {
        return original_->SetupPresentation(context);
    }
    rex::X_STATUS SetupGuestGpu(rex::runtime::FunctionDispatcher* dispatcher,
                          rex::system::KernelState* kernel) override {
        return original_->SetupGuestGpu(dispatcher, kernel);
    }
    bool has_presentation() const override { return original_->has_presentation(); }
    rex::ui::GraphicsProvider* provider() const override { return nullptr; }
    rex::ui::Presenter* presenter() const override {
        // The app asks for the presenter once the window exists, on the UI
        // thread, which is the only place a presenter may be created -- and the
        // translator's device is created together with the window surface, so
        // the order matters and this is where it is decided.
        if (!presenter_)
            presenter_ = std::make_unique<TranslatePresenter>(
                rex::ui::Presenter::FatalErrorHostGpuLossCallback);
        return presenter_.get();
    }
    void SetInterruptCallback(uint32_t callback, uint32_t data) override {
        original_->SetInterruptCallback(callback, data);
    }
    void InitializeRingBuffer(uint32_t pointer, uint32_t size) override {
        original_->InitializeRingBuffer(pointer, size);
    }
    void EnableReadPointerWriteBack(uint32_t pointer, uint32_t blockSize) override {
        original_->EnableReadPointerWriteBack(pointer, blockSize);
    }
    void InitializeShaderStorage(const std::filesystem::path& cache, uint32_t title,
                                 bool blocking) override {
        original_->InitializeShaderStorage(cache, title, blocking);
    }
    void Shutdown() override {
        if (shutdown_) return;
        shutdown_ = true;
        // The app detaches the presenter from the window before shutting the
        // graphics system down, so dropping it here cannot leave the window
        // pointing at a destroyed presenter.
        presenter_.reset();
        original_->Shutdown();
    }

private:
    std::unique_ptr<rex::system::IGraphicsSystem> original_;
    mutable std::unique_ptr<TranslatePresenter> presenter_;
    bool shutdown_ = false;
};

}  // namespace sonic::rex_host
