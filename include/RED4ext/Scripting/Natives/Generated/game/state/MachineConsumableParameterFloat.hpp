#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterFloat.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineConsumableParameterFloat : game::state::MachineActionParameterFloat
{
    static constexpr const char* NAME = "gamestateMachineConsumableParameterFloat";
    static constexpr const char* ALIAS = "ConsumableParameterFloat";

    bool consumed; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(MachineConsumableParameterFloat, 0x20);
} // namespace game::state
using gamestateMachineConsumableParameterFloat = game::state::MachineConsumableParameterFloat;
using ConsumableParameterFloat = game::state::MachineConsumableParameterFloat;
} // namespace RED4ext

// clang-format on
