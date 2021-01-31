#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CNamePool.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDfunc.hpp>

RED4EXT_INLINE RED4ext::CName RED4ext::CNamePool::Add(const char* aText)
{
    CName result;

    static REDfunc<CName* (*)(CName&, const char*)> func(Addresses::CNamePool_AddCstr);
    func(result, aText);
    return result;
}

RED4EXT_INLINE RED4ext::CName RED4ext::CNamePool::Add(const CString& aText)
{
    CName result;

    static REDfunc<CName* (*)(CName&, const CString&)> func(Addresses::CNamePool_AddCString);
    func(result, aText);
    return result;
}

RED4EXT_INLINE void RED4ext::CNamePool::Add(const CName& aName, const char* aText)
{
    static REDfunc<uint8_t (*)(const CName&, const char*)> func(Addresses::CNamePool_AddPair);
    func(aName, aText);
}

RED4EXT_INLINE void RED4ext::CNamePool::Add(const CName& aName, const CString& aText)
{
    Add(aName, aText.c_str());
}

RED4EXT_INLINE const char* RED4ext::CNamePool::Get(const CName& aName)
{
    static REDfunc<const char* (*)(const CName&)> func(Addresses::CNamePool_Get);
    auto result = func(aName);
    if (result)
    {
        return result;
    }

    return "";
}
