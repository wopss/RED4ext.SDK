#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/RazerChromaAnimation.hpp>

namespace RED4ext
{
namespace game
{
struct RazerChromaAnimationSet
{
    static constexpr const char* NAME = "gameRazerChromaAnimationSet";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    DynArray<game::RazerChromaAnimation> animations; // 08
};
RED4EXT_ASSERT_SIZE(RazerChromaAnimationSet, 0x18);
} // namespace game
using gameRazerChromaAnimationSet = game::RazerChromaAnimationSet;
} // namespace RED4ext

// clang-format on
