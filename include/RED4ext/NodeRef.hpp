#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/HashMap.hpp>

namespace RED4ext
{
struct NodeRef
{
    static constexpr auto GlobalRoot = FNV1a64("$");   // NodeRef("$")
    static constexpr auto RelativeRoot = FNV1a64("~"); // NodeRef("~")

    constexpr NodeRef(uint64_t aHash = 0) noexcept
        : hash(aHash)
    {
    }

    constexpr NodeRef(const char* aNodeRefStr) noexcept
        : hash(Hash(aNodeRefStr))
    {
    }

    constexpr operator uint64_t() const noexcept
    {
        return hash;
    }

    constexpr size_t operator()(const NodeRef& aNodeRef) const
    {
        return aNodeRef.hash;
    }

    constexpr NodeRef& operator=(const uint64_t aRhs) noexcept
    {
        hash = aRhs;
        return *this;
    }

    constexpr NodeRef& operator=(const char* aRhs) noexcept
    {
        *this = NodeRef(aRhs);
        return *this;
    }

    constexpr NodeRef& operator=(const NodeRef& aRhs) noexcept
    {
        hash = aRhs.hash;
        return *this;
    }

    constexpr bool operator==(const NodeRef& aRhs) const noexcept
    {
        return hash == aRhs.hash;
    }

    constexpr bool operator!=(const NodeRef& aRhs) const noexcept
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

    static constexpr uint64_t Hash(const char* aNodeRefStr)
    {
        constexpr uint64_t prime = 0x100000001b3;
        constexpr uint64_t seed = 0xCBF29CE484222325;

        uint64_t hash = seed;

        while (aNodeRefStr && *aNodeRefStr)
        {
            if (*aNodeRefStr == '#')
            {
                ++aNodeRefStr;
                continue;
            }

            if (*aNodeRefStr == ';')
            {
                ++aNodeRefStr;

                while (*aNodeRefStr && *aNodeRefStr != '/')
                    ++aNodeRefStr;

                if (!*aNodeRefStr)
                    break;
            }

            hash ^= *aNodeRefStr;
            hash *= prime;

            ++aNodeRefStr;
        }

        return hash == seed ? 0 : hash;
    }

    uint64_t hash;
};
RED4EXT_ASSERT_SIZE(NodeRef, 0x8);

namespace world
{
struct GlobalNodeRef : NodeRef
{
    using NodeRef::NodeRef;
};
RED4EXT_ASSERT_SIZE(GlobalNodeRef, 0x8);
} // namespace world

using GlobalNodeRef = world::GlobalNodeRef;
using worldGlobalNodeRef = world::GlobalNodeRef;

template<typename T>
struct HashMapHash<T, std::enable_if_t<std::is_same_v<T, NodeRef>>>
{
    uint32_t operator()(const T& aKey) const noexcept
    {
        return static_cast<uint32_t>(aKey) ^ ((aKey >> 32) & 0xFFFFFFFF);
    }
};
} // namespace RED4ext
