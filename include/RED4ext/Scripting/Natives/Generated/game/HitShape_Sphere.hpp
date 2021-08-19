#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitShapeBase.hpp>

namespace RED4ext
{
namespace game { 
struct HitShape_Sphere : game::HitShapeBase
{
    static constexpr const char* NAME = "gameHitShape_Sphere";
    static constexpr const char* ALIAS = NAME;

    float radius; // 90
    uint8_t unk94[0xA0 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(HitShape_Sphere, 0xA0);
} // namespace game
} // namespace RED4ext
