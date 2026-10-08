#pragma once
// Off-Windows stand-in for wrl/client.h.
//
// The SDK declares COM smart pointers for its own DXGI monitoring; the host's
// Windows-only units are checked here, so the header must exist. The stub is
// deliberately minimal (no reference counting): it exists so the types in a
// declaration resolve, not so the objects work.
namespace Microsoft {
namespace WRL {
template <typename T>
class ComPtr {
public:
    ComPtr() = default;
    ComPtr(const ComPtr&) = delete;
    ComPtr& operator=(const ComPtr&) = delete;
    T* Get() const { return nullptr; }
    T* operator->() const { return nullptr; }
    T** GetAddressOf() { return nullptr; }
    T** operator&() { return nullptr; }
    void Reset() {}
    explicit operator bool() const { return false; }
};
}  // namespace WRL
}  // namespace Microsoft
