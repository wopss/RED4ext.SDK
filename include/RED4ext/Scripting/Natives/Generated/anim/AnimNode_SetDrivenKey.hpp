#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct AnimNode_SetDrivenKey_InternalsISetDrivenKeyEntryProvider; }

namespace anim
{
struct AnimNode_SetDrivenKey : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_SetDrivenKey";
    static constexpr const char* ALIAS = NAME;

    Handle<anim::AnimNode_SetDrivenKey_InternalsISetDrivenKeyEntryProvider> provider; // 48
    uint8_t unk58[0x70 - 0x58]; // 58
    anim::PoseLink inputLink; // 70
};
RED4EXT_ASSERT_SIZE(AnimNode_SetDrivenKey, 0x88);
} // namespace anim
using animAnimNode_SetDrivenKey = anim::AnimNode_SetDrivenKey;
} // namespace RED4ext

// clang-format on
