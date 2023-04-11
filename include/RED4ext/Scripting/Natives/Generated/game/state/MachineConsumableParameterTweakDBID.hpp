#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterTweakDBID.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineConsumableParameterTweakDBID : game::state::MachineActionParameterTweakDBID
{
    static constexpr const char* NAME = "gamestateMachineConsumableParameterTweakDBID";
    static constexpr const char* ALIAS = "ConsumableParameterTweakDBID";

    bool consumed; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(MachineConsumableParameterTweakDBID, 0x20);
} // namespace game::state
using gamestateMachineConsumableParameterTweakDBID = game::state::MachineConsumableParameterTweakDBID;
using ConsumableParameterTweakDBID = game::state::MachineConsumableParameterTweakDBID;
} // namespace RED4ext

// clang-format on
