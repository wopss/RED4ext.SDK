#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/StackTransformsExtender_SnapToBoneMethod.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformInfo.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) StackTransformsExtender_Entry
{
    static constexpr const char* NAME = "animStackTransformsExtender_Entry";
    static constexpr const char* ALIAS = NAME;

    anim::TransformInfo transformInfo; // 00
    anim::StackTransformsExtender_SnapToBoneMethod snapMethod; // 40
    bool snapToReference; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
    anim::TransformIndex snapTargetBone; // 48
    bool offsetToReference; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
    anim::TransformIndex offsetSpaceBone; // 68
    QsTransform offset; // 80
};
RED4EXT_ASSERT_SIZE(StackTransformsExtender_Entry, 0xB0);
} // namespace anim
using animStackTransformsExtender_Entry = anim::StackTransformsExtender_Entry;
} // namespace RED4ext

// clang-format on
