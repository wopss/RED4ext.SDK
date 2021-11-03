#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace Memory
{
struct IAllocator;
}

struct CClass;
struct BaseStream;
struct CString;

struct ISerializable
{
    virtual CClass* GetNativeType() = 0;                                                // 00
    virtual CClass* GetType();                                                          // 08
    virtual Memory::IAllocator* GetAllocator();                                         // 10
    virtual ~ISerializable() = default;                                                 // 18
    virtual void sub_20();                                                              // 20
    virtual void sub_28();                                                              // 28
    virtual bool sub_30();                                                              // 30
    virtual void sub_38();                                                              // 38
    virtual bool sub_40(BaseStream* aStream);                                           // 40
    virtual bool sub_48(int64_t a1);                                                    // 48
    virtual bool sub_50(int64_t a1);                                                    // 50
    virtual bool sub_58();                                                              // 58
    virtual bool sub_60();                                                              // 60
    virtual bool sub_68();                                                              // 68
    virtual bool sub_70();                                                              // 70
    virtual int64_t sub_78(int64_t a1, int64_t a2, uint8_t a3, int64_t a4, int64_t a5); // 78
    virtual bool sub_80();                                                              // 80
    virtual void sub_88();                                                              // 88
    virtual bool sub_90();                                                              // 90
    virtual bool sub_98();                                                              // 98
    virtual void* sub_A0();                                                             // A0
    virtual CClass* sub_A8();                                                           // A8
    virtual void sub_B0(void* a1);                                                      // B0
    virtual CString sub_B8();                                                           // B8
    virtual void* sub_C0(void* a1);                                                     // C0
    virtual void* sub_C8(void* a1);                                                     // C8
    virtual bool sub_D0();                                                              // D0

    WeakHandle<ISerializable> ref; // 00
    int64_t unk18;                 // 18
    int64_t unk20;                 // 20
    int64_t unk28;                 // 28
};
RED4EXT_ASSERT_SIZE(ISerializable, 0x30);

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
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/ISerializable-inl.hpp>
#endif
