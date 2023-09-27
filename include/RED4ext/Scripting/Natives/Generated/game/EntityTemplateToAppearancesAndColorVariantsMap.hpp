#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityToAppearancesAndColorVariantsMapEntry.hpp>

namespace RED4ext
{
namespace game
{
struct EntityTemplateToAppearancesAndColorVariantsMap : ISerializable
{
    static constexpr const char* NAME = "gameEntityTemplateToAppearancesAndColorVariantsMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::EntityToAppearancesAndColorVariantsMapEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(EntityTemplateToAppearancesAndColorVariantsMap, 0x40);
} // namespace game
using gameEntityTemplateToAppearancesAndColorVariantsMap = game::EntityTemplateToAppearancesAndColorVariantsMap;
} // namespace RED4ext

// clang-format on
