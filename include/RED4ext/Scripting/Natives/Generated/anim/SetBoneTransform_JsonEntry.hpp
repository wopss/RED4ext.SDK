#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SetBoneTransformEntry_SetMethod.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) SetBoneTransform_JsonEntry
{
    static constexpr const char* NAME = "animSetBoneTransform_JsonEntry";
    static constexpr const char* ALIAS = NAME;

    CName transformToChange; // 00
    anim::SetBoneTransformEntry_SetMethod setMethod; // 08
    bool snapToReference; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
    CName sourceBone; // 10
    bool offsetToReference; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
    CName offsetSpaceBone; // 20
    uint8_t unk28[0x30 - 0x28]; // 28
    QsTransform offset; // 30
};
RED4EXT_ASSERT_SIZE(SetBoneTransform_JsonEntry, 0x60);
} // namespace anim
using animSetBoneTransform_JsonEntry = anim::SetBoneTransform_JsonEntry;
} // namespace RED4ext

// clang-format on
