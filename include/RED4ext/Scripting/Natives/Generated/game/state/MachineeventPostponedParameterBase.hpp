#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineParameterAspect.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineeventBaseEvent.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineeventPostponedParameterBase : game::state::MachineeventBaseEvent
{
    static constexpr const char* NAME = "gamestateMachineeventPostponedParameterBase";
    static constexpr const char* ALIAS = "PSMPostponedParameterBase";

    game::state::MachineParameterAspect aspect; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(MachineeventPostponedParameterBase, 0x50);
} // namespace game::state
using gamestateMachineeventPostponedParameterBase = game::state::MachineeventPostponedParameterBase;
using PSMPostponedParameterBase = game::state::MachineeventPostponedParameterBase;
} // namespace RED4ext

// clang-format on
