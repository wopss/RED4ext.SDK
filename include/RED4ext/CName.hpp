#pragma once

#include <cstdint>

namespace RED4ext
{
struct CName
{
    CName(uint64_t aHash = 0);
    CName(const char* aName);

    const char* ToString();

    inline operator bool() const
    {
        return hash != 0;
    }

    uint64_t hash;
};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CName-impl.hpp>
#endif
