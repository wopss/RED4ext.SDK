#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace AI
{
struct __declspec(align(0x10)) Enemy : ISerializable
{
    static constexpr const char* NAME = "AIEnemy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x130 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(Enemy, 0x130);
} // namespace AI
using AIEnemy = AI::Enemy;
} // namespace RED4ext

// clang-format on
