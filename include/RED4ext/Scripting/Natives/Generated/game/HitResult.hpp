#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) HitResult
{
    static constexpr const char* NAME = "gameHitResult";
    static constexpr const char* ALIAS = "HitShapeResult";

    Vector4 hitPositionEnter; // 00
    Vector4 hitPositionExit; // 10
    float enterDistanceFromOriginSq; // 20
    uint8_t unk24[0x30 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(HitResult, 0x30);
} // namespace game
using gameHitResult = game::HitResult;
using HitShapeResult = game::HitResult;
} // namespace RED4ext

// clang-format on
