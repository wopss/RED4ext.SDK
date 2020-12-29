#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CString.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDfunc.hpp>

RED4EXT_INLINE RED4ext::CString::CString()
    : text{}
    , length(0)
    , capacity(0)
{
}

RED4EXT_INLINE RED4ext::CString::CString(const char* aText)
{
    static REDfunc<CString* (*)(CString*, const char*)> func(Addresses::CString_ctor);
    func(this, aText);
}

RED4EXT_INLINE RED4ext::CString::CString(const CString& aOther)
{
    static REDfunc<CString* (*)(CString*, const CString&)> func(Addresses::CString_copy);
    func(this, aOther);
}

RED4EXT_INLINE RED4ext::CString::~CString()
{
    static REDfunc<CString* (*)(CString*)> func(Addresses::CString_dtor);
    func(this);
}

RED4EXT_INLINE RED4ext::CString& RED4ext::CString::operator=(const CString& rhs)
{
    static REDfunc<CString* (*)(CString*, const CString&)> func(Addresses::CString_copy);
    func(this, rhs);
    return *this;
}

RED4EXT_INLINE const char* RED4ext::CString::c_str() const
{
    if (length >= 0x40000000u)
    {
        return text.ptr;
    }

    return text.str;
}

RED4EXT_INLINE uint32_t RED4ext::CString::Length() const
{
    return length & 0x3FFFFFFF;
}
