#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace ent { struct IPositionProvider; }
namespace game { struct Object; }

namespace game
{
struct GrenadeThrowQueryParams
{
    static constexpr const char* NAME = "gameGrenadeThrowQueryParams";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> requester; // 00
    WeakHandle<game::Object> target; // 10
    Handle<ent::IPositionProvider> targetPositionProvider; // 20
    float minRadius; // 30
    float maxRadius; // 34
    float friendlyAvoidanceRadius; // 38
    float throwAngleDegrees; // 3C
    float gravitySimulation; // 40
    float minTargetAngleDegrees; // 44
    float maxTargetAngleDegrees; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(GrenadeThrowQueryParams, 0x50);
} // namespace game
using gameGrenadeThrowQueryParams = game::GrenadeThrowQueryParams;
} // namespace RED4ext

// clang-format on
