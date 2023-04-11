#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/EBinaryOperator.hpp>

namespace RED4ext
{
namespace game::interactions { struct CFunctorDefinition; }
namespace game::interactions { struct IPredicateType; }

namespace game::interactions
{
struct CPredicateDefinition
{
    static constexpr const char* NAME = "gameinteractionsCPredicateDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<game::interactions::IPredicateType> predicateType; // 00
    game::interactions::EBinaryOperator binaryOperator; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
    Handle<game::interactions::CFunctorDefinition> functor1DataDefinition; // 18
    Handle<game::interactions::CFunctorDefinition> functor2DataDefinition; // 28
};
RED4EXT_ASSERT_SIZE(CPredicateDefinition, 0x38);
} // namespace game::interactions
using gameinteractionsCPredicateDefinition = game::interactions::CPredicateDefinition;
} // namespace RED4ext

// clang-format on
