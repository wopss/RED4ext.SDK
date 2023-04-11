#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VisualTagsAppearanceNamesPreset_TagsAppearances.hpp>

namespace RED4ext
{
namespace game
{
struct VisualTagsAppearanceNamesPreset_Entity : ISerializable
{
    static constexpr const char* NAME = "gameVisualTagsAppearanceNamesPreset_Entity";
    static constexpr const char* ALIAS = NAME;

    uint64_t entityPathHash; // 30
    CName debugEntityPath; // 38
    DynArray<game::VisualTagsAppearanceNamesPreset_TagsAppearances> tagsToAppearances; // 40
};
RED4EXT_ASSERT_SIZE(VisualTagsAppearanceNamesPreset_Entity, 0x50);
} // namespace game
using gameVisualTagsAppearanceNamesPreset_Entity = game::VisualTagsAppearanceNamesPreset_Entity;
} // namespace RED4ext

// clang-format on
