#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <cstdint>

namespace RED4ext
{
namespace world
{
struct AnimationSystem;

struct AnimationSystemScriptInterface : IScriptable
{
    static constexpr const char* NAME = "worldAnimationSystemScriptInterface";
    static constexpr const char* ALIAS = "AnimationSystem";

    AnimationSystem* animationSystem; // 40
};
RED4EXT_ASSERT_SIZE(AnimationSystemScriptInterface, 0x48);
} // namespace world
using worldAnimationSystemScriptInterface = world::AnimationSystemScriptInterface;
using AnimationSystem = world::AnimationSystemScriptInterface;
} // namespace RED4ext
