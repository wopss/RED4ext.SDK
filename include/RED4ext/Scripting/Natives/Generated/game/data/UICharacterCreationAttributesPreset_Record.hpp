#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct UICharacterCreationAttributesPreset_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataUICharacterCreationAttributesPreset_Record";
    static constexpr const char* ALIAS = "UICharacterCreationAttributesPreset_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(UICharacterCreationAttributesPreset_Record, 0x58);
} // namespace game::data
using gamedataUICharacterCreationAttributesPreset_Record = game::data::UICharacterCreationAttributesPreset_Record;
using UICharacterCreationAttributesPreset_Record = game::data::UICharacterCreationAttributesPreset_Record;
} // namespace RED4ext

// clang-format on
