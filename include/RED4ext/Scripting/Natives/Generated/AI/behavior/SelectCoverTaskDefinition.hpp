#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct SelectCoverTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorSelectCoverTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    CName sectorSelection; // 38
    Handle<AI::ArgumentMapping> cover; // 40
    Handle<AI::ArgumentMapping> coverID; // 50
    Handle<AI::ArgumentMapping> multiCoverID; // 60
    Handle<AI::ArgumentMapping> combatTarget; // 70
    Handle<AI::ArgumentMapping> friendlyTarget; // 80
    Handle<AI::ArgumentMapping> combatZone; // 90
    Handle<AI::ArgumentMapping> ignoreRestrictMovementArea; // A0
    Handle<AI::ArgumentMapping> selectionPreset; // B0
    Handle<AI::ArgumentMapping> onActivationSelectionPreset; // C0
    Handle<AI::ArgumentMapping> secondStagePreset; // D0
    Handle<AI::ArgumentMapping> coverChangeThreshold; // E0
    Handle<AI::ArgumentMapping> coverGatheringCenterObject; // F0
    Handle<AI::ArgumentMapping> coverDisablingDuration; // 100
};
RED4EXT_ASSERT_SIZE(SelectCoverTaskDefinition, 0x110);
} // namespace AI::behavior
using AIbehaviorSelectCoverTaskDefinition = AI::behavior::SelectCoverTaskDefinition;
} // namespace RED4ext

// clang-format on
