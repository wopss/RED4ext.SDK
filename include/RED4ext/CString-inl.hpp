#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CString.hpp>
#endif

#include <cstring>

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CString::CString(Memory::IAllocator* aAllocator)
    : text{}
    , length(0)
    , allocator(aAllocator ? *reinterpret_cast<Memory::IAllocator**>(aAllocator) : nullptr)
{
}

RED4EXT_INLINE RED4ext::CString::CString(const char* aText, Memory::IAllocator* aAllocator)
    : CString(aAllocator)
{
    RelocFunc<CString* (*)(CString*, const char*)> func(Addresses::CString_ctor);
    func(this, aText);
}

RED4EXT_INLINE RED4ext::CString::CString(const CString& aOther)
    : CString()
{
    RelocFunc<CString* (*)(CString*, const CString&)> func(Addresses::CString_copy);
    func(this, aOther);
}

RED4EXT_INLINE RED4ext::CString::~CString()
{
    RelocFunc<CString* (*)(CString*)> func(Addresses::CString_dtor);
    func(this);
}

RED4EXT_INLINE RED4ext::CString::CString(CString&& aOther) noexcept
    : length(aOther.length)
    , allocator(aOther.allocator)
{
    std::memmove(&text, &aOther.text, sizeof(text));

    aOther.text.ptr = nullptr;
    aOther.length = 0;
    aOther.allocator = 0;
}

RED4EXT_INLINE RED4ext::CString& RED4ext::CString::operator=(const CString& aRhs)
{
    RelocFunc<CString* (*)(CString*, const CString&)> func(Addresses::CString_copy);
    func(this, aRhs);
    return *this;
}

RED4EXT_INLINE RED4ext::CString& RED4ext::CString::operator=(CString&& aRhs) noexcept
{
    std::memmove(&text, &aRhs.text, sizeof(text));

    length = aRhs.length;
    allocator = aRhs.allocator;

    aRhs.text.ptr = nullptr;
    aRhs.length = 0;
    aRhs.allocator = 0;

    return *this;
}

RED4EXT_INLINE bool RED4ext::CString::operator==(const char* aRhs) const noexcept
{
    auto lhsText = c_str();
    if (!lhsText || !aRhs)
    {
        return false;
    }

    return strcmp(lhsText, aRhs) == 0;
}

RED4EXT_INLINE bool RED4ext::CString::operator==(const CString& aRhs) const noexcept
{
    auto lhsText = c_str();
    if (!lhsText)
    {
        return false;
    }
    auto rhsText = aRhs.c_str();
    if (!rhsText)
    {
        return false;
    }

    if (Length() != aRhs.Length())
    {
        return false;
    }

    return strcmp(lhsText, rhsText) == 0;
}

RED4EXT_INLINE bool RED4ext::CString::IsInline() const
{
    return length < 0x40000000;
}

RED4EXT_INLINE const char* RED4ext::CString::c_str() const
{
    if (IsInline())
    {
        return text.str;
    }

    return text.ptr;
}

RED4EXT_INLINE uint32_t RED4ext::CString::Length() const
{
    return length & 0x3FFFFFFF;
}
