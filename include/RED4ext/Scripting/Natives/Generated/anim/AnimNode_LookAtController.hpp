#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtPartInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtPartsDependency.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtStateMachineSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_LookAtController : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_LookAtController";
    static constexpr const char* ALIAS = NAME;

    anim::VectorLink E3_HACK_offset; // 60
    DynArray<anim::LookAtPartInfo> orderedBodyParts; // 80
    DynArray<anim::LookAtStateMachineSettings> stateMachinesSettings; // 90
    DynArray<anim::LookAtPartsDependency> bodyPartsDependencies; // A0
    float substepTime; // B0
    bool isFacial; // B4
    uint8_t unkB5[0x158 - 0xB5]; // B5
};
RED4EXT_ASSERT_SIZE(AnimNode_LookAtController, 0x158);
} // namespace anim
using animAnimNode_LookAtController = anim::AnimNode_LookAtController;
} // namespace RED4ext

// clang-format on
