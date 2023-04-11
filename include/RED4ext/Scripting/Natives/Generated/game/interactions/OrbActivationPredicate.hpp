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
struct OrbActivationPredicate : game::interactions::IPredicateType
{
    static constexpr const char* NAME = "gameinteractionsOrbActivationPredicate";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(OrbActivationPredicate, 0x30);
} // namespace game::interactions
using gameinteractionsOrbActivationPredicate = game::interactions::OrbActivationPredicate;
} // namespace RED4ext

// clang-format on
