#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AnimationTransforms.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectPointType.hpp>

namespace RED4ext
{
namespace game
{
struct AnimationExtractedData
{
    static constexpr const char* NAME = "gameAnimationExtractedData";
    static constexpr const char* ALIAS = NAME;

    CName animationName; // 00
    DynArray<game::AnimationTransforms> animsetsExtractedTransforms; // 08
    game::SmartObjectPointType smartObjectPointType; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(AnimationExtractedData, 0x20);
} // namespace game
using gameAnimationExtractedData = game::AnimationExtractedData;
} // namespace RED4ext

// clang-format on
