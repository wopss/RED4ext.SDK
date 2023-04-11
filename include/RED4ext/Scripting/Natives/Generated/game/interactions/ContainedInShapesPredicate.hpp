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
struct ContainedInShapesPredicate : game::interactions::IPredicateType
{
    static constexpr const char* NAME = "gameinteractionsContainedInShapesPredicate";
    static constexpr const char* ALIAS = NAME;

    bool useCameraPosition; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(ContainedInShapesPredicate, 0x38);
} // namespace game::interactions
using gameinteractionsContainedInShapesPredicate = game::interactions::ContainedInShapesPredicate;
} // namespace RED4ext

// clang-format on
