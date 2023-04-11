#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct SmartObjectMembershipMemberShip
{
    static constexpr const char* NAME = "gameSmartObjectMembershipMemberShip";
    static constexpr const char* ALIAS = NAME;

    uint64_t hash; // 00
    uint32_t index; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(SmartObjectMembershipMemberShip, 0x10);
} // namespace game
using gameSmartObjectMembershipMemberShip = game::SmartObjectMembershipMemberShip;
} // namespace RED4ext

// clang-format on
