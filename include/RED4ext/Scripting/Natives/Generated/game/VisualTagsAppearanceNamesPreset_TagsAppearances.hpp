#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct VisualTagsAppearanceNamesPreset_TagsAppearances : ISerializable
{
    static constexpr const char* NAME = "gameVisualTagsAppearanceNamesPreset_TagsAppearances";
    static constexpr const char* ALIAS = NAME;

    CName visualTagHash; // 30
    DynArray<CName> appearanceNames; // 38
};
RED4EXT_ASSERT_SIZE(VisualTagsAppearanceNamesPreset_TagsAppearances, 0x48);
} // namespace game
using gameVisualTagsAppearanceNamesPreset_TagsAppearances = game::VisualTagsAppearanceNamesPreset_TagsAppearances;
} // namespace RED4ext

// clang-format on
