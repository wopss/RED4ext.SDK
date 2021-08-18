#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IPredicateType.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct OnScreenTestPredicate : game::interactions::IPredicateType
{
    static constexpr const char* NAME = "gameinteractionsOnScreenTestPredicate";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(OnScreenTestPredicate, 0x30);
} // namespace game::interactions
} // namespace RED4ext
