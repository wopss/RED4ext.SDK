#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineeventDrawClimbDebug.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineeventDrawVaultDebug : game::state::MachineeventDrawClimbDebug
{
    static constexpr const char* NAME = "gamestateMachineeventDrawVaultDebug";
    static constexpr const char* ALIAS = "DrawVaultDebug";

    uint8_t unk50[0x68 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(MachineeventDrawVaultDebug, 0x68);
} // namespace game::state
using DrawVaultDebug = game::state::MachineeventDrawVaultDebug;
} // namespace RED4ext
