#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct CName
{
    CName(uint64_t aHash = 0);
    CName(const char* aName);

    bool operator==(const CName& acRhs) const noexcept
    {
        return hash == acRhs.hash;
    }

    const char* ToString();

    bool IsEmpty() const noexcept
    {
        return hash == 0;
    }

    uint64_t hash;
};
RED4EXT_ASSERT_SIZE(CName, 0x8);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CName-inl.hpp>
#endif
