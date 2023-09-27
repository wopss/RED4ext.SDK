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
struct AISubActionCustomEffectors_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionCustomEffectors_Record";
    static constexpr const char* ALIAS = "AISubActionCustomEffectors_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionCustomEffectors_Record, 0x88);
} // namespace game::data
using gamedataAISubActionCustomEffectors_Record = game::data::AISubActionCustomEffectors_Record;
using AISubActionCustomEffectors_Record = game::data::AISubActionCustomEffectors_Record;
} // namespace RED4ext

// clang-format on
