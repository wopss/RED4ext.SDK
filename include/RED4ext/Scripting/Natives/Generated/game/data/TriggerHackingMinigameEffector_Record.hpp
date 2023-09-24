#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct TriggerHackingMinigameEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataTriggerHackingMinigameEffector_Record";
    static constexpr const char* ALIAS = "TriggerHackingMinigameEffector_Record";

    uint8_t unk88[0xA0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(TriggerHackingMinigameEffector_Record, 0xA0);
} // namespace game::data
using gamedataTriggerHackingMinigameEffector_Record = game::data::TriggerHackingMinigameEffector_Record;
using TriggerHackingMinigameEffector_Record = game::data::TriggerHackingMinigameEffector_Record;
} // namespace RED4ext

// clang-format on
