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
struct IHitShape : ISerializable
{
    static constexpr const char* NAME = "gameIHitShape";
    static constexpr const char* ALIAS = "IHitShape";

};
RED4EXT_ASSERT_SIZE(IHitShape, 0x30);
} // namespace game
using gameIHitShape = game::IHitShape;
using IHitShape = game::IHitShape;
} // namespace RED4ext

// clang-format on
