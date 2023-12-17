#pragma once

#include <compare>

#include <RED4ext/Common.hpp>

namespace RED4ext::ent
{
struct EntityID
{
    static constexpr const char* NAME = "entEntityID";
    static constexpr const char* ALIAS = "EntityID";

    static constexpr uint64_t DynamicUpperBound = 0xFFFFFF;
    static constexpr uint64_t PersistableLowerBound = 9000000;
    static constexpr uint64_t PersistableUpperBound = 10000000;

    constexpr EntityID(uint64_t aHash = 0) noexcept
        : hash(aHash)
    {
    }

    constexpr operator uint32_t() const noexcept
    {
        return static_cast<uint32_t>(hash);
    }

    constexpr operator uint64_t() const noexcept
    {
        return hash;
    }

    constexpr operator bool() const noexcept
    {
        return IsDefined();
    }

    constexpr bool operator==(const EntityID& aRhs) const noexcept
    {
        return hash == aRhs.hash;
    }

    constexpr std::strong_ordering operator<=>(const EntityID& aRhs) const noexcept
    {
        return hash <=> aRhs.hash;
    }

    [[nodiscard]] constexpr bool IsDefined() const noexcept
    {
        return hash;
    }

    [[nodiscard]] constexpr bool IsStatic() const noexcept
    {
        return hash && hash > DynamicUpperBound;
    }

    [[nodiscard]] constexpr bool IsDynamic() const noexcept
    {
        return hash && hash <= DynamicUpperBound;
    }

    [[nodiscard]] constexpr bool IsPersistable() const noexcept
    {
        return hash >= PersistableLowerBound && hash < PersistableUpperBound;
    }

    [[nodiscard]] constexpr bool IsTransient() const noexcept
    {
        return hash && !IsPersistable();
    }

    uint64_t hash; // 00
};
RED4EXT_ASSERT_SIZE(EntityID, 0x8);
} // namespace RED4ext::ent
