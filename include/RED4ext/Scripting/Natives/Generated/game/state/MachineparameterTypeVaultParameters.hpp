#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineparameterTypeClimbParametersBase.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineparameterTypeVaultParameters : game::state::MachineparameterTypeClimbParametersBase
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeVaultParameters";
    static constexpr const char* ALIAS = "VaultParameters";

    uint8_t unkF0[0x120 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeVaultParameters, 0x120);
} // namespace game::state
using VaultParameters = game::state::MachineparameterTypeVaultParameters;
} // namespace RED4ext
