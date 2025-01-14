#pragma once

#include <d3d12.h>
#include <dxgi1_6.h>
#include <wrl/client.h>
#include <wrl/wrappers/corewrappers.h>

namespace RED4ext
{
namespace GpuApi
{
enum class HDRMode : uint8_t
{
    Disabled,
    PQ,
    scRGB
};

struct SSwapChainData
{
    static constexpr uint32_t MaxBackBuffers = 3u;

    Microsoft::WRL::ComPtr<IDXGISwapChain4> swapChain; // 00
    uint8_t unk8[0x28 - 0x08];                         // 08 - Always seems to be filled with zeroes.
    uint32_t backBufferTextureId;                      // 28 - Reference to back buffer texture data.
    uint32_t backBufferIndex;                          // 2C
    uint8_t unk30;                                     // 30 - Always seems to be zero.
    bool fullScreen;                                   // 31 - True when in fullscreen.
    HDRMode startupHdrMode;     // 32 - Seems to be set only during startup and stay at the same value during runtime.
    uint8_t unk33[0x38 - 0x33]; // 33 - Always seems to be filled with zeroes.
    HWND windowHandle;          // 38
    Microsoft::WRL::ComPtr<ID3D12Fence1> presentFence;     // 40
    uint64_t presentFenceCompletionFrames[MaxBackBuffers]; // 48 - Compared against completion value in presentFence
                                                           // before swapping back buffer.
    uint64_t presentFenceNextCompletionFrame; // 60 - Gets assigned to presentFenceCompletionFrames[backBufferIndex]
                                              // each GpuApi::DoPresent call after the presentFence is Signaled with the
                                              // same value, auto-incremented on each call.
    D3D12_CPU_DESCRIPTOR_HANDLE backBufferRtvs[MaxBackBuffers]; // 68
    D3D12_CPU_DESCRIPTOR_HANDLE backBufferUavs[MaxBackBuffers]; // 80
    Microsoft::WRL::Wrappers::Event presentFenceEvent;          // 98 - Event signaled on presentFence completion.
};
RED4EXT_ASSERT_SIZE(SSwapChainData, 0xa8);
RED4EXT_ASSERT_OFFSET(SSwapChainData, swapChain, 0x00);
RED4EXT_ASSERT_OFFSET(SSwapChainData, backBufferTextureId, 0x28);
RED4EXT_ASSERT_OFFSET(SSwapChainData, backBufferIndex, 0x2c);
RED4EXT_ASSERT_OFFSET(SSwapChainData, fullScreen, 0x31);
RED4EXT_ASSERT_OFFSET(SSwapChainData, startupHdrMode, 0x32);
RED4EXT_ASSERT_OFFSET(SSwapChainData, windowHandle, 0x38);
RED4EXT_ASSERT_OFFSET(SSwapChainData, presentFence, 0x40);
RED4EXT_ASSERT_OFFSET(SSwapChainData, presentFenceCompletionFrames, 0x48);
RED4EXT_ASSERT_OFFSET(SSwapChainData, presentFenceNextCompletionFrame, 0x60);
RED4EXT_ASSERT_OFFSET(SSwapChainData, backBufferRtvs, 0x68);
RED4EXT_ASSERT_OFFSET(SSwapChainData, backBufferUavs, 0x80);
RED4EXT_ASSERT_OFFSET(SSwapChainData, presentFenceEvent, 0x98);
} // namespace GpuApi
} // namespace RED4ext
