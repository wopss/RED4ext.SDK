#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/MemoryAllocators.hpp>

namespace RED4ext
{
struct IRTTIType;

struct ISerializable
{
    virtual IRTTIType* GetNativeType() = 0;       // 00
    virtual IRTTIType* GetParentType() = 0;       // 08
    virtual IMemoryAllocator* GetAllocator() = 0; // 10
    virtual ~ISerializable() = 0;                 // 18
    virtual void sub_20() = 0;                    // 20
    virtual void sub_28() = 0;                    // 28
    virtual void sub_30() = 0;                    // 30
    virtual void sub_38() = 0;                    // 38
    virtual void sub_40() = 0;                    // 40
    virtual void sub_48() = 0;                    // 48
    virtual void sub_50() = 0;                    // 50
    virtual void sub_58() = 0;                    // 58
    virtual void sub_60() = 0;                    // 60
    virtual void sub_68() = 0;                    // 68
    virtual void sub_70() = 0;                    // 70
    virtual void sub_78() = 0;                    // 78
    virtual void sub_80() = 0;                    // 80
    virtual void sub_88() = 0;                    // 88
    virtual void sub_90() = 0;                    // 90
    virtual void sub_98() = 0;                    // 98
    virtual void sub_A0() = 0;                    // A0
    virtual void sub_A8() = 0;                    // A8
    virtual void sub_B0() = 0;                    // B0
    virtual void sub_B8() = 0;                    // B8
    virtual void sub_C0() = 0;                    // C0
    virtual void sub_C8() = 0;                    // C8
    virtual bool sub_D0() = 0;                    // D0

    WeakHandle<ISerializable> ref; // 00
    int64_t unk18;                 // 18
    int64_t unk20;                 // 20
    int64_t unk28;                 // 28
};

template<typename T, typename = std::enable_if_t<std::is_base_of_v<ISerializable, T>>>
bool IsHandleEmpty(Handle<T>& handle)
{
    return handle->sub_D0();
}

template<typename T, typename = std::enable_if_t<std::is_base_of_v<ISerializable, T>>>
void DeleteHandle(Handle<T>& handle)
{
    auto alloc = handle->GetAllocator();
    handle->~T();
    alloc->Free(handle);
}

RED4EXT_ASSERT_SIZE(ISerializable, 0x30);
} // namespace RED4ext
