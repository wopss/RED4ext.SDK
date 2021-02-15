#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/IDestructibleSpotsSystem.hpp>

namespace RED4ext
{
namespace game { 
struct DestructibleSpotsSystem : world::IDestructibleSpotsSystem
{
    static constexpr const char* NAME = "gameDestructibleSpotsSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DestructibleSpotsSystem, 0x58);
} // namespace game
} // namespace RED4ext
