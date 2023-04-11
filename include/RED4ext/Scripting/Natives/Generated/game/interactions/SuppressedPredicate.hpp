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
struct SuppressedPredicate : game::interactions::IPredicateType
{
    static constexpr const char* NAME = "gameinteractionsSuppressedPredicate";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SuppressedPredicate, 0x30);
} // namespace game::interactions
using gameinteractionsSuppressedPredicate = game::interactions::SuppressedPredicate;
} // namespace RED4ext

// clang-format on
