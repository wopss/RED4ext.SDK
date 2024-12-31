#pragma once

#include <REd4ext/GpuApi/Buffer.hpp>
#include <REd4ext/GpuApi/CommandListContext.hpp>

namespace RED4ext
{
namespace GpuApi
{

struct BuffersContainer // should probably track down the actual struct names
{
    struct BufferDataHandle
    {
        int32_t refCount;
        SBufferData instance;
    };

    void* unk00;
    int32_t numUnsued;
    BufferDataHandle entries[32768];
    uint16_t unk580010;
};
RED4EXT_ASSERT_SIZE(BuffersContainer, 0x580018);

struct CommandListsContainer
{
    struct CommandListHandle
    {
        int32_t refCount;
        CommandListContext* instance;
    };

    void* unk00;
    int32_t numUnsued;
    CommandListHandle entries[128];
    uint16_t unk810;
};
RED4EXT_ASSERT_SIZE(CommandListsContainer, 0x818);



struct SDeviceDataBase
{
    uint8_t unk00[0x5c0ae0 - 0x00];          // 00
    BuffersContainer buffers;                // 5C0AE0
    uint8_t unkb40af8[0xd1ad80 - 0xb40af8];  // B40Af8
    CommandListsContainer commandLists;      // D1AD80
    uint8_t unkd1b598[0x13bc240 - 0xd1b598]; // D1B598
};
RED4EXT_ASSERT_SIZE(SDeviceDataBase, 0x13bc240);


struct SDeviceData : SDeviceDataBase
{
    uint8_t unk13bc240[0x13bc4a8 - 0x13bc240];                      // 13BC240
    Microsoft::WRL::ComPtr<ID3D12Device> DX12Device;                // 13BC4A8
    uint8_t unk13bc4b0[0x13bc4d0 - 0x13bc4b0];                      // 13BC4B0
    Microsoft::WRL::ComPtr<ID3D12CommandQueue> directCommandQueue;  // 13BC4D0
    Microsoft::WRL::ComPtr<ID3D12CommandQueue> computeCommandQueue; // 13BC4D8
    uint8_t unk13bc4e0[0x13bc540 - 0x13bc4e0];                      // 13BC4E0
    void* memoryAllocator;                                          // 13BC540 D3D12MA::Allocator*
    uint8_t unk13bc4b8[0x1a8f880 - 0x13bc548];                      // 13BC548
};
RED4EXT_ASSERT_SIZE(SDeviceData, 0x1a8f880);

RED4EXT_INLINE SDeviceData* GetDeviceData()
{
    return UniversalRelocPtr<SDeviceData*>(Detail::AddressHashes::g_DeviceData);
}

} // namespace GpuApi
} // namespace RED4ext
