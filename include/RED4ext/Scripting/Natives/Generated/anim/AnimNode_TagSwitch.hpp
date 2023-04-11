#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BaseSwitch.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TagSwitch : anim::AnimNode_BaseSwitch
{
    static constexpr const char* NAME = "animAnimNode_TagSwitch";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> tags; // C8
};
RED4EXT_ASSERT_SIZE(AnimNode_TagSwitch, 0xD8);
} // namespace anim
using animAnimNode_TagSwitch = anim::AnimNode_TagSwitch;
} // namespace RED4ext

// clang-format on
