#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionActivateLightPreset_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionActivateLightPreset_Record";
    static constexpr const char* ALIAS = "AISubActionActivateLightPreset_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionActivateLightPreset_Record, 0x60);
} // namespace game::data
using gamedataAISubActionActivateLightPreset_Record = game::data::AISubActionActivateLightPreset_Record;
using AISubActionActivateLightPreset_Record = game::data::AISubActionActivateLightPreset_Record;
} // namespace RED4ext

// clang-format on
