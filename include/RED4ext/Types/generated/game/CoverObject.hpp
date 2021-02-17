#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/anim/CoverState.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct CoverObject : game::Object
{
    static constexpr const char* NAME = "gameCoverObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x238 - 0x230]; // 230
    anim::CoverState coverType; // 238
    float fovDegrees; // 23C
    float fovExposureDegrees; // 240
    uint8_t unk244[0x24C - 0x244]; // 244
    float slotRadius; // 24C
    float hpMax; // 250
    uint8_t unk254[0x258 - 0x254]; // 254
    bool isDestructible; // 258
    uint8_t unk259[0x260 - 0x259]; // 259
};
RED4EXT_ASSERT_SIZE(CoverObject, 0x260);
} // namespace game
} // namespace RED4ext
