#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimation_Rotation : ISerializable
{
    static constexpr const char* NAME = "gameTransformAnimation_Rotation";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TransformAnimation_Rotation, 0x30);
} // namespace game
using gameTransformAnimation_Rotation = game::TransformAnimation_Rotation;
} // namespace RED4ext

// clang-format on
