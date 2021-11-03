#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/ISerializable.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/CString.hpp>
#include <RED4ext/Memory/Allocators.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CClass* RED4ext::ISerializable::GetType()
{
    return GetNativeType();
}

RED4EXT_INLINE RED4ext::Memory::IAllocator* RED4ext::ISerializable::GetAllocator()
{
    return Memory::ScriptAllocator::Get();
}

RED4EXT_INLINE void RED4ext::ISerializable::sub_20()
{
}

RED4EXT_INLINE void RED4ext::ISerializable::sub_28()
{
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_30()
{
    using func_t = bool (*)(ISerializable*);
    RelocFunc<func_t> func(Addresses::ISerializable_sub_30);
    return func(this);
}

RED4EXT_INLINE void RED4ext::ISerializable::sub_38()
{
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_40(BaseStream* aStream)
{
    using func_t = bool (*)(ISerializable*, BaseStream*);
    RelocFunc<func_t> func(Addresses::ISerializable_sub_40);
    return func(this, aStream);
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_48(int64_t a1)
{
    auto type = GetType();
    return type->sub_80(a1, this);
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_50(int64_t a1)
{
    auto type = GetType();
    return type->sub_88(a1, this);
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_58()
{
    return false;
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_60()
{
    return false;
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_68()
{
    return false;
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_70()
{
    return true;
}

RED4EXT_INLINE int64_t RED4ext::ISerializable::sub_78(int64_t a1, int64_t a2, uint8_t a3, int64_t a4, int64_t a5)
{
    using func_t = int64_t (*)(ISerializable*, int64_t, int64_t, uint8_t, int64_t, int64_t);
    RelocFunc<func_t> func(Addresses::ISerializable_sub_78);
    return func(this, a1, a2, a3, a4, a5);
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_80()
{
    return false;
}

RED4EXT_INLINE void RED4ext::ISerializable::sub_88()
{
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_90()
{
    return false;
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_98()
{
    return false;
}

RED4EXT_INLINE void* RED4ext::ISerializable::sub_A0()
{
    // This is an allocation, but for what?
    using func_t = void* (*)(ISerializable*);
    RelocFunc<func_t> func(Addresses::ISerializable_sub_A0);
    return func(this);
}

RED4EXT_INLINE RED4ext::CClass* RED4ext::ISerializable::sub_A8()
{
    return GetType();
}

RED4EXT_INLINE void RED4ext::ISerializable::sub_B0(void* a1)
{
    // This set a struct to 0.
    std::memset(a1, 0, 0x20);
}

RED4EXT_INLINE RED4ext::CString RED4ext::ISerializable::sub_B8()
{
    auto type = GetType();
    auto name = type->GetName();
    return name.ToString();
}

RED4EXT_INLINE void* RED4ext::ISerializable::sub_C0(void* a1)
{
    using func_t = void* (*)(ISerializable*, void*);
    RelocFunc<func_t> func(Addresses::ISerializable_sub_C0);
    return func(this, a1);
}

RED4EXT_INLINE void* RED4ext::ISerializable::sub_C8(void* a1)
{
    // This set a struct to 0.
    std::memset(a1, 0, 0x10);
    return a1;
}

RED4EXT_INLINE bool RED4ext::ISerializable::sub_D0()
{
    return true;
}
