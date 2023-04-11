#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimTransformMappingEntry.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_ParentTransform : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ParentTransform";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::AnimTransformMappingEntry> mapping; // 60
    uint8_t unk70[0xB8 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(AnimNode_ParentTransform, 0xB8);
} // namespace anim
using animAnimNode_ParentTransform = anim::AnimNode_ParentTransform;
} // namespace RED4ext

// clang-format on
