#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IDestructibleSpotsSystem.hpp>

namespace RED4ext
{
namespace game { 
struct DestructibleSpotsSystem : world::IDestructibleSpotsSystem
{
    static constexpr const char* NAME = "gameDestructibleSpotsSystem";
    static constexpr const char* ALIAS = "gameDestructibleSpotsSystem";

    uint8_t unk48[0x80 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DestructibleSpotsSystem, 0x80);
} // namespace game
} // namespace RED4ext
