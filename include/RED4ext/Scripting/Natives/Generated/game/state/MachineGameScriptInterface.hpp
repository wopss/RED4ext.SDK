#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineScriptInterface.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineGameScriptInterface : game::state::MachineScriptInterface
{
    static constexpr const char* NAME = "gamestateMachineGameScriptInterface";
    static constexpr const char* ALIAS = "StateGameScriptInterface";

    uint8_t unk90[0x208 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MachineGameScriptInterface, 0x208);
} // namespace game::state
using gamestateMachineGameScriptInterface = game::state::MachineGameScriptInterface;
using StateGameScriptInterface = game::state::MachineGameScriptInterface;
} // namespace RED4ext

// clang-format on
