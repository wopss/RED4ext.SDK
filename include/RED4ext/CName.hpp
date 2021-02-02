#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
struct CName
{
    constexpr CName(uint64_t aHash = 0) noexcept
        : hash(aHash)
    {
    }

    constexpr CName(const char* aName) noexcept
        : CName(FNV1a(aName))
    {
    }

    operator uint64_t() const noexcept;

    size_t operator()(const CName& aName) const;

    CName& operator=(const uint64_t aRhs) noexcept;
    CName& operator=(const char* aRhs) noexcept;
    CName& operator=(const CName& aRhs) noexcept;

    bool operator==(const CName& aRhs) const noexcept;
    bool operator!=(const CName& aRhs) const noexcept;

    bool operator==(const uint64_t aRhs) const noexcept;
    bool operator!=(const uint64_t aRhs) const noexcept;

    const char* ToString() const;
    bool IsEmpty() const noexcept;

    uint64_t hash; // 00
};
RED4EXT_ASSERT_SIZE(CName, 0x8);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CName-inl.hpp>
#endif
