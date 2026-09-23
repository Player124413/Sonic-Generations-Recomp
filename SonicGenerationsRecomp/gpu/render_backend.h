#pragma once
#include <cstdint>
#include <gpu/native_commands.h>

struct VideoMode
{
    uint32_t width = 1280;
    uint32_t height = 720;
    bool isInterlaced = false;
    bool isWidescreen = true;
    bool isHighDefinition = true;
    float refreshRate = 60.0f;
};

// Process-lifetime counters. Captured draws are not GPU submissions.
struct FrameStats
{
    uint64_t presentCount = 0;
    uint64_t packetsRead = 0;
    uint64_t drawCalls = 0;
    uint64_t capturedDraws = 0;
    uint64_t rejectedBatches = 0;
    uint64_t resourceUploadBatches = 0;
    GuestGpu::CaptureErrors captureErrors;
};

class IRenderBackend
{
public:
    virtual ~IRenderBackend() = default;

    virtual const char* GetName() const = 0;
    virtual bool Init(const VideoMode& mode) = 0;
    virtual void Shutdown() = 0;

    // Called before Present, outside the capture mutex. Batch references are
    // valid only during this call; retain an owned copy if processing later.
    // A backend must validate coverage, resources and shaders before submission.
    // Native binding addresses alone are not host resources. Never report
    // Submitted for skipped/placeholder draws. ResourcesUploaded denotes only
    // completed transfers, not draws. Default/NullBackend rejects.
    virtual GuestGpu::SubmissionResult SubmitGuestBatch(const GuestGpu::NativeBatch&)
    {
        return GuestGpu::SubmissionResult::Unsupported;
    }

    // Called from the present path (VdSwap). Backends flush/swap here.
    virtual void Present() = 0;

    // Resize notification (host window changed size).
    virtual void Resize(uint32_t width, uint32_t height) = 0;
};
