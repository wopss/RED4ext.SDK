#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/DestructibleObject.hpp>

namespace RED4ext
{
namespace cp { 
struct ExplosiveBarrel : game::DestructibleObject
{
    static constexpr const char* NAME = "cpExplosiveBarrel";
    static constexpr const char* ALIAS = NAME;

    CName colliderComponentName; // 238
    CName destructionComponentName; // 240
    uint8_t unk248[0x260 - 0x248]; // 248
};
RED4EXT_ASSERT_SIZE(ExplosiveBarrel, 0x260);
} // namespace cp
} // namespace RED4ext
