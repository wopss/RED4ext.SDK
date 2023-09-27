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
struct HackingMiniGame_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataHackingMiniGame_Record";
    static constexpr const char* ALIAS = "HackingMiniGame_Record";

    uint8_t unk48[0x138 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(HackingMiniGame_Record, 0x138);
} // namespace game::data
using gamedataHackingMiniGame_Record = game::data::HackingMiniGame_Record;
using HackingMiniGame_Record = game::data::HackingMiniGame_Record;
} // namespace RED4ext

// clang-format on
