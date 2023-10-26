#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitResult.hpp>

namespace RED4ext
{
namespace game { struct HitShapeUserData; }

namespace game
{
struct __declspec(align(0x10)) ShapeData
{
    static constexpr const char* NAME = "gameShapeData";
    static constexpr const char* ALIAS = "HitShapeData";

    game::HitResult result; // 00
    Handle<game::HitShapeUserData> userData; // 30
    uint8_t unk40[0x50 - 0x40]; // 40
    CName physicsMaterial; // 50
    CName hitShapeName; // 58
    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(ShapeData, 0x70);
} // namespace game
using gameShapeData = game::ShapeData;
using HitShapeData = game::ShapeData;
} // namespace RED4ext

// clang-format on
