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

    CName(const char* aName) noexcept;

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

    /**
     * @brief Check if the name's hash is equal to 0 (None).
     * @return True if name's hash is equal to 0, false otherwise.
     *
     * @remark 'None' is a special name in Cyberpunk and will always be 0 in CNamePool.
     */
    bool IsNone() const noexcept;

    [[deprecated("Use 'IsNone()' instead.")]] bool IsEmpty() const noexcept;

    uint64_t hash; // 00
};
RED4EXT_ASSERT_SIZE(CName, 0x8);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CName-inl.hpp>
#endif
