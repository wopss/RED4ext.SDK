#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world { 
struct AnimationSystemScriptInterface : IScriptable
{
    static constexpr const char* NAME = "worldAnimationSystemScriptInterface";
    static constexpr const char* ALIAS = "AnimationSystem";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AnimationSystemScriptInterface, 0x48);
} // namespace world
using AnimationSystem = world::AnimationSystemScriptInterface;
} // namespace RED4ext
