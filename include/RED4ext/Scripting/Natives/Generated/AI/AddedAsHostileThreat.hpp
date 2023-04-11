#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace AI { struct TargetTrackerComponent; }

namespace AI
{
struct AddedAsHostileThreat : AI::AIEvent
{
    static constexpr const char* NAME = "AIAddedAsHostileThreat";
    static constexpr const char* ALIAS = "AddedAsHostileThreat";

    WeakHandle<AI::TargetTrackerComponent> threateningEntity; // 50
    bool threateningEntityCanTriggersCombat; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(AddedAsHostileThreat, 0x68);
} // namespace AI
using AIAddedAsHostileThreat = AI::AddedAsHostileThreat;
using AddedAsHostileThreat = AI::AddedAsHostileThreat;
} // namespace RED4ext

// clang-format on
