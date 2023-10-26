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
struct __declspec(align(0x10)) HitShape_Capsule : game::HitShapeBase
{
    static constexpr const char* NAME = "gameHitShape_Capsule";
    static constexpr const char* ALIAS = "HitShape_Capsule";

    float radius; // 90
    float height; // 94
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(HitShape_Capsule, 0xA0);
} // namespace game
using gameHitShape_Capsule = game::HitShape_Capsule;
using HitShape_Capsule = game::HitShape_Capsule;
} // namespace RED4ext

// clang-format on
