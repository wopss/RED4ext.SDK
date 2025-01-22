#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CString.hpp>
#endif

#include <cstring>

#include <RED4ext/Detail/AddressHashes.hpp>
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
    static UniversalRelocFunc<CString* (*)(CString*, const char*)> func(Detail::AddressHashes::CString_ctor_str);
    func(this, aText);
}

RED4EXT_INLINE RED4ext::CString::CString(const char* aText, uint32_t aLength, Memory::IAllocator* aAllocator)
    : CString(aAllocator)
{
    static UniversalRelocFunc<CString* (*)(CString*, const char*, uint32_t)> func(
        Detail::AddressHashes::CString_ctor_span);
    func(this, aText, aLength);
}

RED4EXT_INLINE RED4ext::CString::CString(const std::string& aText, Memory::IAllocator* aAllocator)
    : CString(aAllocator)
{
    static UniversalRelocFunc<CString* (*)(CString*, const char*)> func(Detail::AddressHashes::CString_ctor_str);
    func(this, aText.data());
}

RED4EXT_INLINE RED4ext::CString::CString(const std::string_view& aText, Memory::IAllocator* aAllocator)
    : CString(aAllocator)
{
    static UniversalRelocFunc<CString* (*)(CString*, const char*, uint32_t)> func(
        Detail::AddressHashes::CString_ctor_span);
    func(this, aText.data(), static_cast<uint32_t>(aText.size()));
}

RED4EXT_INLINE RED4ext::CString::CString(const CString& aOther)
    : CString()
{
    static UniversalRelocFunc<CString* (*)(CString*, const CString&)> func(Detail::AddressHashes::CString_copy);
    func(this, aOther);
}

RED4EXT_INLINE RED4ext::CString::~CString()
{
    static UniversalRelocFunc<CString* (*)(CString*)> func(Detail::AddressHashes::CString_dtor);
    func(this);
}

RED4EXT_INLINE RED4ext::CString::CString(CString&& aOther) noexcept
    : length(aOther.length)
    , allocator(aOther.allocator)
{
    std::memmove(&text, &aOther.text, sizeof(text));

    std::memset(&aOther.text, 0, sizeof(aOther.text));
    aOther.length = 0;
    aOther.allocator = nullptr;
}

RED4EXT_INLINE RED4ext::CString& RED4ext::CString::operator=(const CString& aRhs)
{
    static UniversalRelocFunc<CString* (*)(CString*, const CString&)> func(Detail::AddressHashes::CString_copy);
    func(this, aRhs);
    return *this;
}

RED4EXT_INLINE RED4ext::CString& RED4ext::CString::operator=(CString&& aRhs) noexcept
{
    std::memmove(&text, &aRhs.text, sizeof(text));

    length = aRhs.length;
    allocator = aRhs.allocator;

    std::memset(&aRhs.text, 0, sizeof(aRhs.text));
    aRhs.length = 0;
    aRhs.allocator = nullptr;

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

RED4EXT_INLINE bool RED4ext::CString::IsInline() const noexcept
{
    return length < 0x40000000;
}

RED4EXT_INLINE const char* RED4ext::CString::c_str() const noexcept
{
    if (IsInline())
    {
        return text.inline_str;
    }

    return text.str.ptr;
}

RED4EXT_INLINE uint32_t RED4ext::CString::Length() const noexcept
{
    return length & 0x3FFFFFFF;
}
