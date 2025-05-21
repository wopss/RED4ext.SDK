#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/GpuApi/Buffer.hpp>
#include <RED4ext/GpuApi/CommandListContext.hpp>
#include <RED4ext/GpuApi/D3D12MemAlloc.hpp>
#include <RED4ext/GpuApi/SwapChain.hpp>
#include <RED4ext/SpinLock.hpp>

#include <cassert>

namespace RED4ext
{
namespace GpuApi
{
template<typename T, size_t MAX_SIZE>
struct ResourceContainer
{
    struct ResourceHandle
    {
        bool IsUsed() const;

        std::atomic_int32_t refCount;
        T instance;
    };

    static constexpr uint32_t IDToIndex(const uint32_t id)
    {
        return id - 1;
    }

    static constexpr uint32_t IndexToID(const uint32_t index)
    {
        return index + 1;
    }

    static constexpr bool IsValidIndex(const uint32_t index)
    {
        return index < MAX_SIZE;
    }

    static constexpr bool IsValidID(const uint32_t id)
    {
        return IsValidIndex(IDToIndex(id));
    }

    bool IsUsedID(uint32_t id) const;

    bool IsUnusedID(uint32_t id) const;

    bool IsEmpty() const;

    bool IsFull() const;

    T& GetData(uint32_t id);

    const T& GetData(uint32_t id) const;

    SpinLock& spinLockRef;         // 00 - Always points to SDeviceDataBase::resourcesSpinLock.
    std::atomic_int32_t numUnused; // 08 - Defaults to MaxSize.
    ResourceHandle resources[MAX_SIZE];
    uint16_t unusedIndices[MAX_SIZE]; // These are indices, not IDs!
};

struct SDeviceDataBase
{
    uint8_t unk00[0x02f180];                                            // 000000
    SpinLock resourcesSpinLock;                                         // 02F180
    uint8_t unk2f180[0x5c0ae0 - 0x02f181];                              // 02F181
    ResourceContainer<SBufferData, 32768> buffers;                      // 5C0AE0
    uint8_t unkb40af8[0xc97f20 - 0xb50af0];                             // B50AF0
    ResourceContainer<SSwapChainData, 32> swapChains;                   // C97F20
    uint8_t unkc99678[0xd1ad80 - 0xc99570];                             // C98028
    ResourceContainer<UniquePtr<CommandListContext>, 128> commandLists; // D1AD80
    uint8_t unkd1b598[0x13bc240 - 0xd1b690];                            // D1B690
};
RED4EXT_ASSERT_SIZE(SDeviceDataBase, 0x13bc240);
RED4EXT_ASSERT_OFFSET(SDeviceDataBase, buffers, 0x5c0ae0);
RED4EXT_ASSERT_OFFSET(SDeviceDataBase, swapChains, 0xc97f20);
RED4EXT_ASSERT_OFFSET(SDeviceDataBase, commandLists, 0xd1ad80);

struct SDeviceData : SDeviceDataBase
{
    uint8_t unk13bc240[0x13bc4a8 - 0x13bc240];                      // 13BC240
    Microsoft::WRL::ComPtr<ID3D12Device> device;                    // 13BC4A8 - Should be 14 but refuses to compile.
    uint8_t unk13bc4b0[0x13bc4d0 - 0x13bc4b0];                      // 13BC4B0
    Microsoft::WRL::ComPtr<ID3D12CommandQueue> directCommandQueue;  // 13BC4D0
    Microsoft::WRL::ComPtr<ID3D12CommandQueue> computeCommandQueue; // 13BC4D8
    uint8_t unk13bc4e0[0x13bc540 - 0x13bc4e0];                      // 13BC4E0
    Microsoft::WRL::ComPtr<D3D12MA::Allocator> memoryAllocator;     // 13BC540
    uint8_t unk13bc4b8[0x1a8f880 - 0x13bc548];                      // 13BC548
};
RED4EXT_ASSERT_SIZE(SDeviceData, 0x1a8f880);
RED4EXT_ASSERT_OFFSET(SDeviceData, device, 0x13bc4a8);
RED4EXT_ASSERT_OFFSET(SDeviceData, directCommandQueue, 0x13bc4d0);
RED4EXT_ASSERT_OFFSET(SDeviceData, memoryAllocator, 0x13bc540);

SDeviceData* GetDeviceData();

template<typename T, size_t MAX_SIZE>
bool ResourceContainer<T, MAX_SIZE>::ResourceHandle::IsUsed() const
{
    return refCount >= 0;
}

template<typename T, size_t MAX_SIZE>
bool ResourceContainer<T, MAX_SIZE>::IsUsedID(const uint32_t id) const
{
    return IsValidID(id) && resources[IDToIndex(id)].IsUsed();
}

template<typename T, size_t MAX_SIZE>
bool ResourceContainer<T, MAX_SIZE>::IsUnusedID(const uint32_t id) const
{
    return IsValidID(id) && !resources[IDToIndex(id)].IsUsed();
}

template<typename T, size_t MAX_SIZE>
bool ResourceContainer<T, MAX_SIZE>::IsEmpty() const
{
    assert(numUnused <= MAX_SIZE);
    return numUnused == MAX_SIZE;
}

template<typename T, size_t MAX_SIZE>
bool ResourceContainer<T, MAX_SIZE>::IsFull() const
{
    assert(numUnused <= MAX_SIZE);
    return numUnused == 0;
}

template<typename T, size_t MAX_SIZE>
T& ResourceContainer<T, MAX_SIZE>::GetData(uint32_t id)
{
    assert(IsUsedID(id));
    return resources[IDToIndex(id)].instance;
}

template<typename T, size_t MAX_SIZE>
const T& ResourceContainer<T, MAX_SIZE>::GetData(uint32_t id) const
{
    assert(IsUsedID(id));
    return resources[IDToIndex(id)].instance;
}
} // namespace GpuApi
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/GpuApi/DeviceData-inl.hpp>
#endif
