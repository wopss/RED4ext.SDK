#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Hashing/FNV1a.hpp>

namespace RED4ext
{
struct ResourcePath
{
    constexpr ResourcePath(uint64_t aHash = 0) noexcept
        : hash(aHash)
    {
    }

    constexpr ResourcePath(const char* aPath) noexcept
        : hash(HashSanitized(aPath))
    {
    }

    constexpr operator uint64_t() const noexcept
    {
        return hash;
    }

    constexpr size_t operator()(const ResourcePath& aResource) const
    {
        return aResource.hash;
    }

    constexpr ResourcePath& operator=(const uint64_t aRhs) noexcept
    {
        hash = aRhs;
        return *this;
    }

    constexpr ResourcePath& operator=(const char* aRhs) noexcept
    {
        *this = ResourcePath(aRhs);
        return *this;
    }

    constexpr ResourcePath& operator=(const ResourcePath& aRhs) noexcept
    {
        hash = aRhs.hash;
        return *this;
    }

    constexpr bool operator==(const ResourcePath& aRhs) const noexcept
    {
        return hash == aRhs.hash;
    }

    constexpr bool operator!=(const ResourcePath& aRhs) const noexcept
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

    [[nodiscard]] constexpr bool IsEmpty() const noexcept
    {
        return hash == 0;
    }

    static constexpr uint64_t HashSanitized(const char* aPath)
    {
        // Sanitations:
        // 1. Discard opening and closing quotes (singles and doubles)
        // 2. Discard starting slashes and backslashes
        // 3. Discard repeating slashes and backslashes
        // 4. Convert slashes to backslashes
        // 5. Convert alpha characters to lowercase

        constexpr size_t MaxLength = 216;
        char buffer[MaxLength];

        char* out = buffer;
        const char* in = aPath;

        if (*in == '"' || *in == '\'')
            ++in;

        while (*in == '/' || *in == '\\')
            ++in;

        while (*in != '\0' && *in != '"' && *in != '\'')
        {
            if (*in == '/' || *in == '\\')
            {
                *out = '\\';
                ++out;
                ++in;

                while (*in == '/' || *in == '\\')
                    ++in;
            }
            else
            {
                *out = (*in >= 'A' && *in <= 'Z') ? *in + ('a' - 'A') : *in;
                ++out;
                ++in;
            }
        }

        if (out == buffer)
            return 0;

        *out = '\0';

        return RED4ext::FNV1a64(buffer);
    }

    uint64_t hash;
};
RED4EXT_ASSERT_SIZE(ResourcePath, 0x8);

template<typename T>
struct HashMapHash<T, std::enable_if_t<std::is_same_v<T, ResourcePath>>>
{
    uint32_t operator()(const T& aKey) const noexcept
    {
        return static_cast<uint32_t>(aKey) ^ ((aKey >> 32) & 0xFFFFFFFF);
    }
};
} // namespace RED4ext
