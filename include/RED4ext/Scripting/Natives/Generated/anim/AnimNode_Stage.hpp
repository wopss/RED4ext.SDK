#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Container.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_Stage : anim::AnimNode_Container
{
    static constexpr const char* NAME = "animAnimNode_Stage";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::PoseLink> inputPoses; // 58
};
RED4EXT_ASSERT_SIZE(AnimNode_Stage, 0x68);
} // namespace anim
using animAnimNode_Stage = anim::AnimNode_Stage;
} // namespace RED4ext

// clang-format on
