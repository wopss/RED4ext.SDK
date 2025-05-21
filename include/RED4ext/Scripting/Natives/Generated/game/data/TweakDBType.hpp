#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class TweakDBType : int32_t
{
    Invalid = 0,
    ForeignKey = 1,
    Int = 2,
    Float = 3,
    Bool = 4,
    String = 5,
    CName = 6,
    ResRef = 7,
    LocKey = 8,
    Color = 9,
    Vector2 = 10,
    Vector3 = 11,
    EulerAngles = 12,
    Quaternion = 13,
};
} // namespace game::data
using gamedataTweakDBType = game::data::TweakDBType;
} // namespace RED4ext

// clang-format on
