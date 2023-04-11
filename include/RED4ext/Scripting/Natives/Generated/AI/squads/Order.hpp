#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace AI::squads
{
struct Order
{
    static constexpr const char* NAME = "AIsquadsOrder";
    static constexpr const char* ALIAS = "SquadOrder";

    CName squadAction; // 00
    uint32_t state; // 08
    uint32_t id; // 0C
};
RED4EXT_ASSERT_SIZE(Order, 0x10);
} // namespace AI::squads
using AIsquadsOrder = AI::squads::Order;
using SquadOrder = AI::squads::Order;
} // namespace RED4ext

// clang-format on
