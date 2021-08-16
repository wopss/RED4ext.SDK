#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/state/MachineScriptInterface.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineGameScriptInterface : game::state::MachineScriptInterface
{
    static constexpr const char* NAME = "gamestateMachineGameScriptInterface";
    static constexpr const char* ALIAS = "StateGameScriptInterface";

    uint8_t unk70[0xB0 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(MachineGameScriptInterface, 0xB0);
} // namespace game::state
using StateGameScriptInterface = game::state::MachineGameScriptInterface;
} // namespace RED4ext
