#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_MaskReset : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_MaskReset";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x68 - 0x60]; // 60
    DynArray<anim::TransformIndex> transforms; // 68
    uint8_t unk78[0x88 - 0x78]; // 78
    anim::FloatLink weightNode; // 88
};
RED4EXT_ASSERT_SIZE(AnimNode_MaskReset, 0xA8);
} // namespace anim
using animAnimNode_MaskReset = anim::AnimNode_MaskReset;
} // namespace RED4ext

// clang-format on
