#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterCName.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineConsumableParameterCName : game::state::MachineActionParameterCName
{
    static constexpr const char* NAME = "gamestateMachineConsumableParameterCName";
    static constexpr const char* ALIAS = "ConsumableParameterCName";

    bool consumed; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(MachineConsumableParameterCName, 0x20);
} // namespace game::state
using gamestateMachineConsumableParameterCName = game::state::MachineConsumableParameterCName;
using ConsumableParameterCName = game::state::MachineConsumableParameterCName;
} // namespace RED4ext

// clang-format on
