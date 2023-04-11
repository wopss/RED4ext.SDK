#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>

namespace RED4ext
{
namespace AI
{
struct SpotUsageToken
{
    static constexpr const char* NAME = "AISpotUsageToken";
    static constexpr const char* ALIAS = NAME;

    world::GlobalNodeID usedSpotId; // 00
    ent::EntityID spotUserId; // 08
    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(SpotUsageToken, 0x18);
} // namespace AI
using AISpotUsageToken = AI::SpotUsageToken;
} // namespace RED4ext

// clang-format on
