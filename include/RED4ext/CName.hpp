#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct CName
{
    CName(uint64_t aHash = 0) noexcept;
    CName(const char* aName) noexcept;

    operator uint64_t() const noexcept;

    size_t operator()(const CName& aName) const;

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
