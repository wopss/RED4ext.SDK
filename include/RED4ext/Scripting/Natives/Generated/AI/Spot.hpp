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
struct Spot : ISerializable
{
    static constexpr const char* NAME = "AISpot";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Spot, 0x30);
} // namespace AI
using AISpot = AI::Spot;
} // namespace RED4ext

// clang-format on
