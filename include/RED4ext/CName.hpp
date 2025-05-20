#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Hashing/FNV1a.hpp>

namespace RED4ext
{
struct CName
{
    static constexpr uint64_t EmptyStrHash = FNV1a64("");
    static constexpr uint64_t NoneStrHash = FNV1a64("None");

    constexpr CName(uint64_t aHash = 0) noexcept
        : hash(aHash)
    {
    }

    constexpr CName(const char* aName) noexcept
        : hash(FNV1a64(aName))
    {
        if (hash == EmptyStrHash || hash == NoneStrHash)
        {
            hash = 0;
        }
    }

    CName(const char* aName, size_t aLength) noexcept
        : hash(FNV1a64(reinterpret_cast<const uint8_t*>(aName), aLength))
    {
        if (hash == EmptyStrHash || hash == NoneStrHash)
        {
            hash = 0;
        }
    }

    constexpr operator uint64_t() const noexcept
    {
        return hash;
    }

    constexpr size_t operator()(const CName& aName) const noexcept
    {
        return aName.hash;
    }

    constexpr CName& operator=(const uint64_t aRhs) noexcept
    {
        hash = aRhs;
        return *this;
    }

    constexpr CName& operator=(const char* aRhs) noexcept
    {
        *this = CName(aRhs);
        return *this;
    }

    constexpr CName& operator=(const CName& aRhs) noexcept
    {
        hash = aRhs.hash;
        return *this;
    }

    constexpr bool operator==(const CName& aRhs) const noexcept
    {
        return hash == aRhs.hash;
    }

    constexpr bool operator!=(const CName& aRhs) const noexcept
    {
        return !(*this == aRhs);
    }

    constexpr bool operator==(const uint64_t aRhs) const noexcept
    {
        return hash == aRhs;
    }

    constexpr bool operator!=(const uint64_t aRhs) const noexcept
    {
        return hash != aRhs;
    }

    const char* ToString() const;

    /**
     * @brief Check if the name's hash is equal to 0 (None).
     * @return True if name's hash is equal to 0, false otherwise.
     *
     * @remark 'None' is a special name in Cyberpunk and will always be 0 in CNamePool.
     */
    constexpr bool IsNone() const noexcept
    {
        return hash == 0;
    }

    [[deprecated("Use 'IsNone()' instead.")]] constexpr bool IsEmpty() const noexcept
    {
        return IsNone();
    }

    uint64_t hash; // 00
};
RED4EXT_ASSERT_SIZE(CName, 0x8);

template<typename T>
struct HashMapHash<T, std::enable_if_t<std::is_same_v<T, CName>>>
{
    uint32_t operator()(const T& aKey) const noexcept
    {
        return static_cast<uint32_t>(aKey) ^ ((aKey >> 32) & 0xFFFFFFFF);
    }
};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CName-inl.hpp>
#endif
