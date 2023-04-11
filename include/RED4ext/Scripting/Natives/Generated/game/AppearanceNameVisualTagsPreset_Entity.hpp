#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AppearanceNameVisualTagsPreset_AppearanceTags.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace game
{
struct AppearanceNameVisualTagsPreset_Entity : ISerializable
{
    static constexpr const char* NAME = "gameAppearanceNameVisualTagsPreset_Entity";
    static constexpr const char* ALIAS = NAME;

    red::TagList commonVisualTags; // 30
    DynArray<game::AppearanceNameVisualTagsPreset_AppearanceTags> appearancesToTags; // 40
    uint64_t entityPathHash; // 50
    CName debugEntityPath; // 58
    uint64_t entityRigPathHash; // 60
    CName debugEntityRigPath; // 68
};
RED4EXT_ASSERT_SIZE(AppearanceNameVisualTagsPreset_Entity, 0x70);
} // namespace game
using gameAppearanceNameVisualTagsPreset_Entity = game::AppearanceNameVisualTagsPreset_Entity;
} // namespace RED4ext

// clang-format on
