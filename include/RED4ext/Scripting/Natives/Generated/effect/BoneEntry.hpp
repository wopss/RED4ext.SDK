#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace effect
{
struct __declspec(align(0x10)) BoneEntry
{
    static constexpr const char* NAME = "effectBoneEntry";
    static constexpr const char* ALIAS = NAME;

    CName boneName; // 00
    Vector3 relativePosition; // 08
    uint8_t unk14[0x20 - 0x14]; // 14
    Quaternion relativeRotation; // 20
};
RED4EXT_ASSERT_SIZE(BoneEntry, 0x30);
} // namespace effect
using effectBoneEntry = effect::BoneEntry;
} // namespace RED4ext

// clang-format on
