#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPingSystem.hpp>

namespace RED4ext
{
namespace game { 
struct PingSystem : game::IPingSystem
{
    static constexpr const char* NAME = "gamePingSystem";
    static constexpr const char* ALIAS = "PingSystem";

    uint8_t unk58[0x80 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(PingSystem, 0x80);
} // namespace game
using PingSystem = game::PingSystem;
} // namespace RED4ext
