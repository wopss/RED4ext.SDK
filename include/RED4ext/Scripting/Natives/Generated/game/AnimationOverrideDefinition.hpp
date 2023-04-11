#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace game
{
struct AnimationOverrideDefinition
{
    static constexpr const char* NAME = "gameAnimationOverrideDefinition";
    static constexpr const char* ALIAS = NAME;

    RaRef<anim::AnimSet> animset; // 00
    DynArray<CName> variables; // 08
};
RED4EXT_ASSERT_SIZE(AnimationOverrideDefinition, 0x18);
} // namespace game
using gameAnimationOverrideDefinition = game::AnimationOverrideDefinition;
} // namespace RED4ext

// clang-format on
