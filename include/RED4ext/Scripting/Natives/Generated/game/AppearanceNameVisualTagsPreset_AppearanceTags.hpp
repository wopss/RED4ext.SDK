#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace game
{
struct AppearanceNameVisualTagsPreset_AppearanceTags : ISerializable
{
    static constexpr const char* NAME = "gameAppearanceNameVisualTagsPreset_AppearanceTags";
    static constexpr const char* ALIAS = NAME;

    CName appearanceName; // 30
    red::TagList visualTags; // 38
};
RED4EXT_ASSERT_SIZE(AppearanceNameVisualTagsPreset_AppearanceTags, 0x48);
} // namespace game
using gameAppearanceNameVisualTagsPreset_AppearanceTags = game::AppearanceNameVisualTagsPreset_AppearanceTags;
} // namespace RED4ext

// clang-format on
