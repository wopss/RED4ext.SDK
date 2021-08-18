#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct FreeCamera : game::Object
{
    static constexpr const char* NAME = "gameFreeCamera";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x238 - 0x230]; // 230
    float baseSpeed; // 238
    float analogTurnRate; // 23C
    float mouseTurnRate; // 240
    float activationBlendTime; // 244
    float deactivationBlendTime; // 248
    bool usePhysicalCollision; // 24C
    uint8_t unk24D[0x288 - 0x24D]; // 24D
};
RED4EXT_ASSERT_SIZE(FreeCamera, 0x288);
} // namespace game
} // namespace RED4ext
