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

    uint8_t unk228[0x230 - 0x228]; // 228
    anim::CoverState coverType; // 230
    float fovDegrees; // 234
    float fovExposureDegrees; // 238
    uint8_t unk23C[0x244 - 0x23C]; // 23C
    float slotRadius; // 244
    float hpMax; // 248
    uint8_t unk24C[0x250 - 0x24C]; // 24C
    bool isDestructible; // 250
    uint8_t unk251[0x258 - 0x251]; // 251
};
RED4EXT_ASSERT_SIZE(CoverObject, 0x258);
} // namespace game
} // namespace RED4ext
