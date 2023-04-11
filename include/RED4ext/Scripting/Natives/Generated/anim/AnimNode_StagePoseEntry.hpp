#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_StagePoseEntry : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_StagePoseEntry";
    static constexpr const char* ALIAS = NAME;

    anim::PoseLink parentInput; // 48
    CName inputName; // 60
};
RED4EXT_ASSERT_SIZE(AnimNode_StagePoseEntry, 0x68);
} // namespace anim
using animAnimNode_StagePoseEntry = anim::AnimNode_StagePoseEntry;
} // namespace RED4ext

// clang-format on
