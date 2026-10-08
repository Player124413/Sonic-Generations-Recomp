#pragma once
// Off-Windows stand-in for dxgi.h.
//
// The SDK's presenter header includes it on Windows, and it is checked here as
// Windows code. Only the interfaces the header names are declared -- the DXGI
// calls themselves live in the SDK's own translation units, which are not
// checked off Windows, and a stub that pretended to implement them would only
// make a Windows-only mistake compile here.
struct IDXGIObject { virtual ~IDXGIObject() = default; };
struct IDXGIOutput : IDXGIObject {};
struct IDXGIFactory : IDXGIObject {};
struct IDXGIFactory1 : IDXGIFactory {};
