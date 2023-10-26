#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitShapeBase.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) HitShape_Sphere : game::HitShapeBase
{
    static constexpr const char* NAME = "gameHitShape_Sphere";
    static constexpr const char* ALIAS = "HitShape_Sphere";

    float radius; // 90
    uint8_t unk94[0xA0 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(HitShape_Sphere, 0xA0);
} // namespace game
using gameHitShape_Sphere = game::HitShape_Sphere;
using HitShape_Sphere = game::HitShape_Sphere;
} // namespace RED4ext

// clang-format on
