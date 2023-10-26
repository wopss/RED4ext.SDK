#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::influence
{
struct __declspec(align(0x10)) BumpAgent : ISerializable
{
    static constexpr const char* NAME = "gameinfluenceBumpAgent";
    static constexpr const char* ALIAS = "BumpAgent";

    uint8_t unk30[0x2D0 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(BumpAgent, 0x2D0);
} // namespace game::influence
using gameinfluenceBumpAgent = game::influence::BumpAgent;
using BumpAgent = game::influence::BumpAgent;
} // namespace RED4ext

// clang-format on
