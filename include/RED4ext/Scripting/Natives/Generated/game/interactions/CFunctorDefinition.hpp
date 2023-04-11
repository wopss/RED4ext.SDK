#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/CPredicateDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/EUnaryOperator.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IFunctorDefinition.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct CFunctorDefinition : game::interactions::IFunctorDefinition
{
    static constexpr const char* NAME = "gameinteractionsCFunctorDefinition";
    static constexpr const char* ALIAS = NAME;

    game::interactions::CPredicateDefinition predicate; // 30
    game::interactions::EUnaryOperator unaryOperator; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(CFunctorDefinition, 0x70);
} // namespace game::interactions
using gameinteractionsCFunctorDefinition = game::interactions::CFunctorDefinition;
} // namespace RED4ext

// clang-format on
