#pragma once

#include <RED4ext/Common.hpp>

#include <d3d12.h>
#include <wrl/client.h>

#include <cstdint>

namespace RED4ext
{
namespace GpuApi
{
struct SBufferData
{
    uint32_t bufferSize;                                   // 00
    uint8_t unk04[0x10 - 0x04];                            // 04
    Microsoft::WRL::ComPtr<ID3D12Resource> bufferResource; // 10
    void* unk18;                                           // 18
    uint8_t unk20[0xa8 - 0x20];                            // 20
};
RED4EXT_ASSERT_SIZE(SBufferData, 0xa8);
RED4EXT_ASSERT_OFFSET(SBufferData, bufferResource, 0x10);
} // namespace GpuApi
} // namespace RED4ext
