#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/DefaultAppearancePreset_Entity.hpp>

namespace RED4ext
{
namespace game
{
struct EntityTemplateDefaultAppearancePreset : ISerializable
{
    static constexpr const char* NAME = "gameEntityTemplateDefaultAppearancePreset";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::DefaultAppearancePreset_Entity> defaultAppearancePresets; // 30
};
RED4EXT_ASSERT_SIZE(EntityTemplateDefaultAppearancePreset, 0x40);
} // namespace game
using gameEntityTemplateDefaultAppearancePreset = game::EntityTemplateDefaultAppearancePreset;
} // namespace RED4ext

// clang-format on
