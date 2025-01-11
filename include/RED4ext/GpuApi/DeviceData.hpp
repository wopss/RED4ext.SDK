#pragma once

#include <RED4ext/GpuApi/Buffer.hpp>
#include <RED4ext/GpuApi/CommandListContext.hpp>
#include <RED4ext/GpuApi/D3D12MemAlloc.hpp>

namespace RED4ext
{
namespace GpuApi
{

template<typename T, size_t MAX_SIZE>
struct ResourceContainer
{
    struct Resource
    {
        int32_t refCount;
        T instance;
    };

    void* mutex;              // 00 - spin lock?
    int32_t defaultNumUnused; // 08 - defaults to MaxSize
    Resource resources[MAX_SIZE];
    uint16_t unusedIndices[MAX_SIZE];
};

struct SDeviceDataBase
{
    uint8_t unk00[0x5c0ae0 - 0x00];                           // 00
    ResourceContainer<SBufferData, 32768> buffers;            // 5C0AE0
    uint8_t unkb40af8[0xd1ad80 - 0xb50af0];                   // B50AF0
    ResourceContainer<CommandListContext*, 128> commandLists; // D1AD80 - Uses unknown ptr wrapper
    uint8_t unkd1b598[0x13bc240 - 0xd1b690];                  // D1B690
};
RED4EXT_ASSERT_SIZE(SDeviceDataBase, 0x13bc240);
RED4EXT_ASSRT_OFFSET(SDeviceDataBase, buffers, 0x5C0AE0);
RED4EXT_ASSRT_OFFSET(SDeviceDataBase, commandLists, 0xD1AD80);

struct SDeviceData : SDeviceDataBase
{
    uint8_t unk13bc240[0x13bc4a8 - 0x13bc240];                      // 13BC240
    Microsoft::WRL::ComPtr<ID3D12Device> device;                    // 13BC4A8
    uint8_t unk13bc4b0[0x13bc4d0 - 0x13bc4b0];                      // 13BC4B0
    Microsoft::WRL::ComPtr<ID3D12CommandQueue> directCommandQueue;  // 13BC4D0
    Microsoft::WRL::ComPtr<ID3D12CommandQueue> computeCommandQueue; // 13BC4D8
    uint8_t unk13bc4e0[0x13bc540 - 0x13bc4e0];                      // 13BC4E0
    Microsoft::WRL::ComPtr<D3D12MA::Allocator> memoryAllocator;     // 13BC540
    uint8_t unk13bc4b8[0x1a8f880 - 0x13bc548];                      // 13BC548
};
RED4EXT_ASSERT_SIZE(SDeviceData, 0x1a8f880);
RED4EXT_ASSRT_OFFSET(SDeviceData, device, 0x13BC4A8);
RED4EXT_ASSRT_OFFSET(SDeviceData, directCommandQueue, 0x13BC4D0);
RED4EXT_ASSRT_OFFSET(SDeviceData, memoryAllocator, 0x13BC540);

RED4EXT_INLINE SDeviceData& GetDeviceData()
{
    static UniversalRelocPtr<SDeviceData*> dd(Detail::AddressHashes::g_DeviceData);
    return *dd;
}

} // namespace GpuApi
} // namespace RED4ext
