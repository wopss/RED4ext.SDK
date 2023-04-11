#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/CoverState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct CoverObject : game::Object
{
    static constexpr const char* NAME = "gameCoverObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x248 - 0x240]; // 240
    anim::CoverState coverType; // 248
    float fovDegrees; // 24C
    float fovExposureDegrees; // 250
    uint8_t unk254[0x25C - 0x254]; // 254
    float slotRadius; // 25C
    float hpMax; // 260
    uint8_t unk264[0x268 - 0x264]; // 264
    bool isDestructible; // 268
    uint8_t unk269[0x270 - 0x269]; // 269
};
RED4EXT_ASSERT_SIZE(CoverObject, 0x270);
} // namespace game
using gameCoverObject = game::CoverObject;
} // namespace RED4ext

// clang-format on
