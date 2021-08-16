#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerSystem.hpp>

namespace RED4ext
{
namespace cp { 
struct PlayerSystem : game::PlayerSystem
{
    static constexpr const char* NAME = "cpPlayerSystem";
    static constexpr const char* ALIAS = "PlayerSystem";

    uint8_t unk68[0x60500 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(PlayerSystem, 0x60500);
} // namespace cp
using PlayerSystem = cp::PlayerSystem;
} // namespace RED4ext
