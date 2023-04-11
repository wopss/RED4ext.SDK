#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IPredicateType.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct LayerActivatedPredicate : game::interactions::IPredicateType
{
    static constexpr const char* NAME = "gameinteractionsLayerActivatedPredicate";
    static constexpr const char* ALIAS = NAME;

    CName linkedLayersName; // 30
    CName layerName; // 38
};
RED4EXT_ASSERT_SIZE(LayerActivatedPredicate, 0x40);
} // namespace game::interactions
using gameinteractionsLayerActivatedPredicate = game::interactions::LayerActivatedPredicate;
} // namespace RED4ext

// clang-format on
