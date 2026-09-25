#pragma once

#include <rex/system/interfaces/graphics.h>
#include <memory>
#include <stdexcept>

namespace sonic::rex_host {

// Migration seam only. This is NOT a shadow/native renderer: the original
// backend still owns guest GPU execution, presentation and all Vd services.
class GraphicsBridge final : public rex::system::IGraphicsSystem {
public:
    explicit GraphicsBridge(std::unique_ptr<rex::system::IGraphicsSystem> original)
        : original_(std::move(original)) {
        if (!original_) throw std::invalid_argument("GraphicsBridge requires a real reference backend");
    }
    ~GraphicsBridge() override { Shutdown(); }
    rex::X_STATUS SetupPresentation(rex::ui::WindowedAppContext* context) override {
        return original_->SetupPresentation(context);
    }
    rex::X_STATUS SetupGuestGpu(rex::runtime::FunctionDispatcher* dispatcher,
                          rex::system::KernelState* kernel) override {
        return original_->SetupGuestGpu(dispatcher, kernel);
    }
    bool has_presentation() const override { return original_->has_presentation(); }
    rex::ui::GraphicsProvider* provider() const override { return original_->provider(); }
    rex::ui::Presenter* presenter() const override { return original_->presenter(); }
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
        if (!shutdown_) { shutdown_ = true; original_->Shutdown(); }
    }
private:
    std::unique_ptr<rex::system::IGraphicsSystem> original_;
    bool shutdown_ = false; // shutdown follows the SDK's serialized teardown
};

} // namespace sonic::rex_host
