#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/DestructibleObject.hpp>

namespace RED4ext
{
namespace cp { 
struct ExplosiveBarrel : game::DestructibleObject
{
    static constexpr const char* NAME = "cpExplosiveBarrel";
    static constexpr const char* ALIAS = NAME;

    CName colliderComponentName; // 230
    CName destructionComponentName; // 238
    uint8_t unk240[0x258 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(ExplosiveBarrel, 0x258);
} // namespace cp
} // namespace RED4ext
