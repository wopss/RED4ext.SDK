#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterWeakIScriptable.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineConsumableParameterWeakIScriptable : game::state::MachineActionParameterWeakIScriptable
{
    static constexpr const char* NAME = "gamestateMachineConsumableParameterWeakIScriptable";
    static constexpr const char* ALIAS = "ConsumableParameterWeakIScriptable";

    bool consumed; // 20
    uint8_t unk21[0x28 - 0x21]; // 21
};
RED4EXT_ASSERT_SIZE(MachineConsumableParameterWeakIScriptable, 0x28);
} // namespace game::state
using gamestateMachineConsumableParameterWeakIScriptable = game::state::MachineConsumableParameterWeakIScriptable;
using ConsumableParameterWeakIScriptable = game::state::MachineConsumableParameterWeakIScriptable;
} // namespace RED4ext

// clang-format on
