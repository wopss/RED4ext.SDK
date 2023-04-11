#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/influence/EBumpPolicy.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_EnableBumps : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_EnableBumps";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 70
    AI::influence::EBumpPolicy policy; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_EnableBumps, 0x78);
} // namespace quest
using questCharacterManagerParameters_EnableBumps = quest::CharacterManagerParameters_EnableBumps;
} // namespace RED4ext

// clang-format on
