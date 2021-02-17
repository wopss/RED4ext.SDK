#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/state/MachineScriptInterface.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineGameScriptInterface : game::state::MachineScriptInterface
{
    static constexpr const char* NAME = "gamestateMachineGameScriptInterface";
    static constexpr const char* ALIAS = "StateGameScriptInterface";

    uint8_t unk60[0xA0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(MachineGameScriptInterface, 0xA0);
} // namespace game::state
using StateGameScriptInterface = game::state::MachineGameScriptInterface;
} // namespace RED4ext
