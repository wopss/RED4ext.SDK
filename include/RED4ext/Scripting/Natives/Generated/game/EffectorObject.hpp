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
struct EffectorObject : ISerializable
{
    static constexpr const char* NAME = "gameEffectorObject";
    static constexpr const char* ALIAS = "EffectorObject";

    uint8_t unk30[0x60 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(EffectorObject, 0x60);
} // namespace game
using gameEffectorObject = game::EffectorObject;
using EffectorObject = game::EffectorObject;
} // namespace RED4ext

// clang-format on
