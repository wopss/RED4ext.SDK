#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterIScriptable.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineConsumableParameterIScriptable : game::state::MachineActionParameterIScriptable
{
    static constexpr const char* NAME = "gamestateMachineConsumableParameterIScriptable";
    static constexpr const char* ALIAS = "ConsumableParameterIScriptable";

    bool consumed; // 20
    uint8_t unk21[0x28 - 0x21]; // 21
};
RED4EXT_ASSERT_SIZE(MachineConsumableParameterIScriptable, 0x28);
} // namespace game::state
using gamestateMachineConsumableParameterIScriptable = game::state::MachineConsumableParameterIScriptable;
using ConsumableParameterIScriptable = game::state::MachineConsumableParameterIScriptable;
} // namespace RED4ext

// clang-format on
