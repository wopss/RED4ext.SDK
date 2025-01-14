#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/GpuApi/DeviceData.hpp>
#endif

template<typename T, size_t MAX_SIZE>
bool RED4ext::GpuApi::ResourceContainer<T, MAX_SIZE>::Resource::IsUsed() const
{
    return refCount >= 0;
}

template<typename T, size_t MAX_SIZE>
bool RED4ext::GpuApi::ResourceContainer<T, MAX_SIZE>::IsUsedID(const uint32_t id) const
{
    return IsValidID(id) && resources[IDToIndex(id)].IsUsed();
}

template<typename T, size_t MAX_SIZE>
bool RED4ext::GpuApi::ResourceContainer<T, MAX_SIZE>::IsUnusedID(const uint32_t id) const
{
    return IsValidID(id) && !resources[IDToIndex(id)].IsUsed();
}

template<typename T, size_t MAX_SIZE>
bool RED4ext::GpuApi::ResourceContainer<T, MAX_SIZE>::IsEmpty() const
{
    assert(numUnused <= MAX_SIZE);
    return numUnused == MAX_SIZE;
}

template<typename T, size_t MAX_SIZE>
bool RED4ext::GpuApi::ResourceContainer<T, MAX_SIZE>::IsFull() const
{
    assert(numUnused <= MAX_SIZE);
    return numUnused == 0;
}

template<typename T, size_t MAX_SIZE>
T& RED4ext::GpuApi::ResourceContainer<T, MAX_SIZE>::GetData(uint32_t id)
{
    assert(IsUsedID(id));
    return resources[IDToIndex(id)].instance;
}

template<typename T, size_t MAX_SIZE>
const T& RED4ext::GpuApi::ResourceContainer<T, MAX_SIZE>::GetData(uint32_t id) const
{
    assert(IsUsedID(id));
    return resources[IDToIndex(id)].instance;
}

RED4EXT_INLINE RED4ext::GpuApi::SDeviceData* RED4ext::GpuApi::GetDeviceData()
{
    static UniversalRelocPtr<SDeviceData*> dd(Detail::AddressHashes::g_DeviceData);
    return dd;
}
