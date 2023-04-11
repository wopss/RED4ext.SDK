#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineplayeractionsActionCharge.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineplayeractionsActionProjectileShowPreview : game::state::MachineplayeractionsActionCharge
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsActionProjectileShowPreview";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MachineplayeractionsActionProjectileShowPreview, 0x70);
} // namespace game::state
using gamestateMachineplayeractionsActionProjectileShowPreview = game::state::MachineplayeractionsActionProjectileShowPreview;
} // namespace RED4ext

// clang-format on
