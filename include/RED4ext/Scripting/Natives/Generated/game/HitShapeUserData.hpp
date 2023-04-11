#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct HitShapeUserData : IScriptable
{
    static constexpr const char* NAME = "gameHitShapeUserData";
    static constexpr const char* ALIAS = "HitShapeUserData";

};
RED4EXT_ASSERT_SIZE(HitShapeUserData, 0x40);
} // namespace game
using gameHitShapeUserData = game::HitShapeUserData;
using HitShapeUserData = game::HitShapeUserData;
} // namespace RED4ext

// clang-format on
