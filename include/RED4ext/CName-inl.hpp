#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CName.hpp>
#endif

#include <RED4ext/CNamePool.hpp>

RED4EXT_INLINE const char* RED4ext::CName::ToString() const
{
    return CNamePool::Get(*this);
}
