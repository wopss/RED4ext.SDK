#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AnimationOverrideDefinition.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }
namespace anim { struct Rig; }

namespace game
{
struct BodyTypeAnimationDefinition
{
    static constexpr const char* NAME = "gameBodyTypeAnimationDefinition";
    static constexpr const char* ALIAS = NAME;

    RaRef<anim::Rig> rig; // 00
    DynArray<RaRef<anim::AnimSet>> animsets; // 08
    DynArray<game::AnimationOverrideDefinition> overrides; // 18
};
RED4EXT_ASSERT_SIZE(BodyTypeAnimationDefinition, 0x28);
} // namespace game
using gameBodyTypeAnimationDefinition = game::BodyTypeAnimationDefinition;
} // namespace RED4ext

// clang-format on
