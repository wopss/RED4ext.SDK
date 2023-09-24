#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_SetSensePreset : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetSensePreset";
    static constexpr const char* ALIAS = NAME;

    TweakDBID presetID; // 70
    bool main; // 78
    bool resetToMain; // 79
    uint8_t unk7A[0x80 - 0x7A]; // 7A
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetSensePreset, 0x80);
} // namespace quest
using questCharacterManagerParameters_SetSensePreset = quest::CharacterManagerParameters_SetSensePreset;
} // namespace RED4ext

// clang-format on
