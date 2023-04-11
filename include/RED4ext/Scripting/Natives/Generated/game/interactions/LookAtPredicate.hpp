#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ELookAtTarget.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ELookAtTest.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IPredicateType.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct LookAtPredicate : game::interactions::IPredicateType
{
    static constexpr const char* NAME = "gameinteractionsLookAtPredicate";
    static constexpr const char* ALIAS = NAME;

    game::interactions::ELookAtTarget testTarget; // 30
    game::interactions::ELookAtTest testType; // 34
    bool stopOnTransparent; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(LookAtPredicate, 0x40);
} // namespace game::interactions
using gameinteractionsLookAtPredicate = game::interactions::LookAtPredicate;
} // namespace RED4ext

// clang-format on
