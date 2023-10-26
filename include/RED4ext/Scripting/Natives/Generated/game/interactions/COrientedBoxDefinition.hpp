#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IShapeDefinition.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct __declspec(align(0x10)) COrientedBoxDefinition : game::interactions::IShapeDefinition
{
    static constexpr const char* NAME = "gameinteractionsCOrientedBoxDefinition";
    static constexpr const char* ALIAS = NAME;

    Vector4 position; // 30
    Vector4 forward; // 40
    Vector4 right; // 50
    Vector4 up; // 60
};
RED4EXT_ASSERT_SIZE(COrientedBoxDefinition, 0x70);
} // namespace game::interactions
using gameinteractionsCOrientedBoxDefinition = game::interactions::COrientedBoxDefinition;
} // namespace RED4ext

// clang-format on
