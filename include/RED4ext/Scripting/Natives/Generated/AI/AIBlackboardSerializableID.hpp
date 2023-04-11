#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardSerializableID.hpp>

namespace RED4ext
{
namespace AI
{
struct AIBlackboardSerializableID
{
    static constexpr const char* NAME = "AIAIBlackboardSerializableID";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardSerializableID id; // 00
    uint8_t unk20[0x28 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(AIBlackboardSerializableID, 0x28);
} // namespace AI
using AIAIBlackboardSerializableID = AI::AIBlackboardSerializableID;
} // namespace RED4ext

// clang-format on
