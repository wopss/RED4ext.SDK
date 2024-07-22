#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/worldAnimationSystem.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(world::AnimationSystem, 0xB2B90);
using worldAnimationSystem = world::AnimationSystem;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) AnimationSystem : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldAnimationSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xB2B90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AnimationSystem, 0xB2B90);
} // namespace world
using worldAnimationSystem = world::AnimationSystem;
} // namespace RED4ext
*/

// clang-format on
