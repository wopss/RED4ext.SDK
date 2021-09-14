#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPlayerSystem.hpp>

namespace RED4ext
{
namespace game { 
struct PlayerSystem : game::IPlayerSystem
{
    static constexpr const char* NAME = "gamePlayerSystem";
    static constexpr const char* ALIAS = "gamePlayerSystem";

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PlayerSystem, 0x68);
} // namespace game
} // namespace RED4ext
