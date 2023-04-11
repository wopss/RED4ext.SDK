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
struct TransformAnimation_Position : ISerializable
{
    static constexpr const char* NAME = "gameTransformAnimation_Position";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TransformAnimation_Position, 0x30);
} // namespace game
using gameTransformAnimation_Position = game::TransformAnimation_Position;
} // namespace RED4ext

// clang-format on
