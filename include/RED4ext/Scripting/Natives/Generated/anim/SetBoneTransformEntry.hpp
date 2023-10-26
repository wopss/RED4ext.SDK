#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SetBoneTransformEntry_SetMethod.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) SetBoneTransformEntry
{
    static constexpr const char* NAME = "animSetBoneTransformEntry";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex transformToChange; // 00
    anim::SetBoneTransformEntry_SetMethod setMethod; // 18
    bool snapToReference; // 1C
    uint8_t unk1D[0x20 - 0x1D]; // 1D
    anim::TransformIndex sourceBone; // 20
    bool offsetToReference; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    anim::TransformIndex offsetSpaceBone; // 40
    uint8_t unk58[0x60 - 0x58]; // 58
    QsTransform offset; // 60
};
RED4EXT_ASSERT_SIZE(SetBoneTransformEntry, 0x90);
} // namespace anim
using animSetBoneTransformEntry = anim::SetBoneTransformEntry;
} // namespace RED4ext

// clang-format on
