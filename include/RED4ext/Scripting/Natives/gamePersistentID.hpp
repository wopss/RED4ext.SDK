#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext::game
{
struct PersistentID
{
    static constexpr const char* NAME = "gamePersistentID";
    static constexpr const char* ALIAS = "PersistentID";

    constexpr PersistentID(EntityID aEntityID = 0ull, CName aComponentName = 0ull) noexcept
        : entityID(aEntityID)
        , componentName(aComponentName)
    {
    }

    constexpr PersistentID(uint64_t aEntityHash) noexcept
        : PersistentID(EntityID(aEntityHash))
    {
    }

    constexpr operator uint64_t() const noexcept
    {
        return GetHash();
    }

    constexpr operator bool() const noexcept
    {
        return IsDefined();
    }

    [[nodiscard]] constexpr bool IsDefined() const noexcept
    {
        return entityID.IsDefined();
    }

    [[nodiscard]] constexpr uint64_t GetHash() const noexcept
    {
        if (IsComponent())
        {
            constexpr auto magic = 0XC6A4A7935BD1E995;

            const auto& e = entityID.hash;
            const auto& c = componentName.hash;

            return magic * (e ^ (magic * ((magic * c) ^ ((magic * c) >> 47))));
        }

        return entityID.hash;
    }

    [[nodiscard]] constexpr bool IsEntity() const noexcept
    {
        return componentName.IsNone();
    }

    [[nodiscard]] constexpr bool IsComponent() const noexcept
    {
        return !componentName.IsNone();
    }

    EntityID entityID;   // 00
    CName componentName; // 08
};
RED4EXT_ASSERT_SIZE(PersistentID, 0x10);
} // namespace RED4ext::game
