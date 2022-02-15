#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPopulationSystem.hpp>

namespace RED4ext
{
namespace game { 
struct PopulationSystem : game::IPopulationSystem
{
    static constexpr const char* NAME = "gamePopulationSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x1460 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PopulationSystem, 0x1460);
} // namespace game
} // namespace RED4ext
