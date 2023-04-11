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
struct TransformAnimation_Movement : ISerializable
{
    static constexpr const char* NAME = "gameTransformAnimation_Movement";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TransformAnimation_Movement, 0x30);
} // namespace game
using gameTransformAnimation_Movement = game::TransformAnimation_Movement;
} // namespace RED4ext

// clang-format on
