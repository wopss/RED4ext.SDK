#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/influence/EBoundingBoxType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/influence/ObstacleAgent.hpp>

namespace RED4ext
{
namespace game::influence
{
struct __declspec(align(0x10)) ObstacleComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameinfluenceObstacleComponent";
    static constexpr const char* ALIAS = "InfluenceObstacleComponent";

    Box customBoundingBox; // 120
    game::influence::EBoundingBoxType boundingBoxType; // 140
    uint8_t unk144[0x150 - 0x144]; // 144
    game::influence::ObstacleAgent obstacleAgent; // 150
};
RED4EXT_ASSERT_SIZE(ObstacleComponent, 0x210);
} // namespace game::influence
using gameinfluenceObstacleComponent = game::influence::ObstacleComponent;
using InfluenceObstacleComponent = game::influence::ObstacleComponent;
} // namespace RED4ext

// clang-format on
