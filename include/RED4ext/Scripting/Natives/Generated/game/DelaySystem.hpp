#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDelaySystem.hpp>

namespace RED4ext
{
namespace game { 
struct DelaySystem : game::IDelaySystem
{
    static constexpr const char* NAME = "gameDelaySystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x53080 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DelaySystem, 0x53080);
} // namespace game
} // namespace RED4ext
