#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct FreeCamera : game::Object
{
    static constexpr const char* NAME = "gameFreeCamera";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk228[0x230 - 0x228]; // 228
    float baseSpeed; // 230
    float analogTurnRate; // 234
    float mouseTurnRate; // 238
    float activationBlendTime; // 23C
    float deactivationBlendTime; // 240
    bool usePhysicalCollision; // 244
    uint8_t unk245[0x280 - 0x245]; // 245
};
RED4EXT_ASSERT_SIZE(FreeCamera, 0x280);
} // namespace game
} // namespace RED4ext
