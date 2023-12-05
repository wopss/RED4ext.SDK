#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game { 
enum class SimpleMessageType : uint32_t
{
    Undefined = 0,
    Negative = 1,
    Neutral = 2,
    Vehicle = 3,
    Apartment = 4,
    Relic = 5,
    Money = 6,
    Reveal = 7,
    Boss = 8,
};
} // namespace game
using gameSimpleMessageType = game::SimpleMessageType;
using SimpleMessageType = game::SimpleMessageType;
} // namespace RED4ext

// clang-format on
