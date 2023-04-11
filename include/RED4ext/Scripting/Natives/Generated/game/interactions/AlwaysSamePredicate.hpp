#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IPredicateType.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct AlwaysSamePredicate : game::interactions::IPredicateType
{
    static constexpr const char* NAME = "gameinteractionsAlwaysSamePredicate";
    static constexpr const char* ALIAS = NAME;

    float priority; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(AlwaysSamePredicate, 0x38);
} // namespace game::interactions
using gameinteractionsAlwaysSamePredicate = game::interactions::AlwaysSamePredicate;
} // namespace RED4ext

// clang-format on
