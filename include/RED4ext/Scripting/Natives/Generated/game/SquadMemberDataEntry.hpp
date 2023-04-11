#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SquadType.hpp>

namespace RED4ext
{
namespace game
{
struct SquadMemberDataEntry
{
    static constexpr const char* NAME = "gameSquadMemberDataEntry";
    static constexpr const char* ALIAS = NAME;

    CName squadName; // 00
    AI::SquadType squadType; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(SquadMemberDataEntry, 0x10);
} // namespace game
using gameSquadMemberDataEntry = game::SquadMemberDataEntry;
} // namespace RED4ext

// clang-format on
