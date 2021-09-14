#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitShapeBase.hpp>

namespace RED4ext
{
namespace game { 
struct HitShape_OBB : game::HitShapeBase
{
    static constexpr const char* NAME = "gameHitShape_OBB";
    static constexpr const char* ALIAS = "HitShape_OBB";

    Vector3 dimensions; // 90
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
};
RED4EXT_ASSERT_SIZE(HitShape_OBB, 0xA0);
} // namespace game
using HitShape_OBB = game::HitShape_OBB;
} // namespace RED4ext
