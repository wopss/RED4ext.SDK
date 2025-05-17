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

struct PostLoadParams
{
    bool disablePreInitialization; // 00
    uint8_t pad01[0x8 - 0x1];      // 01
};
RED4EXT_ASSERT_SIZE(PostLoadParams, 0x8);

struct ISerializable
{
    ISerializable();

    virtual CClass* GetNativeType() = 0;                                                // 00
    virtual CClass* GetType();                                                          // 08
    virtual Memory::IAllocator* GetAllocator();                                         // 10
    virtual ~ISerializable() = default;                                                 // 18
    virtual void sub_20();                                                              // 20
    virtual void PostLoad(const PostLoadParams& aParams);                               // 28
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
    virtual bool CanBeDestructed();                                                     // D0

    operator const WeakHandle<ISerializable>&() const noexcept;
    operator Handle<ISerializable>() noexcept;

    WeakHandle<ISerializable> ref;   // 08 - Initialized in Handle ctor
    WeakHandle<ISerializable> unk18; // 18
    uint64_t unk28;                  // 28 - Global incremental ID, used in serialization
};
RED4EXT_ASSERT_SIZE(ISerializable, 0x30);
} // namespace RED4ext

/**
 * @brief Adds default implementation for generated/imported class.
 * Allows ISerializable class to be used without Handle<> and RTTI construction.
 * Some ISerializables are used as structs, without initilializing ref counter.
 */
#ifndef RED4EXT_IMPL_NATIVE_TYPE
#define RED4EXT_IMPL_NATIVE_TYPE()                                                                                     \
    CClass* GetNativeType() override                                                                                   \
    {                                                                                                                  \
        return CRTTISystem::Get()->GetClass(NAME);                                                                     \
    }
#endif

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/ISerializable-inl.hpp>
#endif
