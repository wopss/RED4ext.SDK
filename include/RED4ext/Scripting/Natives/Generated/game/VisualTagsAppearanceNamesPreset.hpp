#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VisualTagsAppearanceNamesPreset_Entity.hpp>

namespace RED4ext
{
namespace game
{
struct VisualTagsAppearanceNamesPreset : ISerializable
{
    static constexpr const char* NAME = "gameVisualTagsAppearanceNamesPreset";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::VisualTagsAppearanceNamesPreset_Entity> presets; // 30
};
RED4EXT_ASSERT_SIZE(VisualTagsAppearanceNamesPreset, 0x40);
} // namespace game
using gameVisualTagsAppearanceNamesPreset = game::VisualTagsAppearanceNamesPreset;
} // namespace RED4ext

// clang-format on
