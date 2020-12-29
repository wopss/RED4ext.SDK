#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CName.hpp>
#endif

#include <RED4ext/Common.hpp>
#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDfunc.hpp>
#include <RED4ext/REDhash.hpp>

RED4EXT_INLINE RED4ext::CName::CName(uint64_t aHash)
    : hash(aHash)
{
}

RED4EXT_INLINE RED4ext::CName::CName(const char* aName)
    : CName(FNV1a(aName))
{
}

RED4EXT_INLINE const char* RED4ext::CName::ToString()
{
    static REDfunc<char* (*)(uint64_t&)> func(Addresses::CNamePool_Get);
    auto result = func(hash);
    if (result)
    {
        return result;
    }

    return "ERR_NO_NAME";
}
