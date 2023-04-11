#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterBool.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineConsumableParameterBool : game::state::MachineActionParameterBool
{
    static constexpr const char* NAME = "gamestateMachineConsumableParameterBool";
    static constexpr const char* ALIAS = "ConsumableParameterBool";

    bool consumed; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(MachineConsumableParameterBool, 0x20);
} // namespace game::state
using gamestateMachineConsumableParameterBool = game::state::MachineConsumableParameterBool;
using ConsumableParameterBool = game::state::MachineConsumableParameterBool;
} // namespace RED4ext

// clang-format on
