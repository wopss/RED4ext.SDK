#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) ImportFacialTransformNoScale
{
    static constexpr const char* NAME = "animImportFacialTransformNoScale";
    static constexpr const char* ALIAS = NAME;

    Quaternion rotation; // 00
    Vector3 translation; // 10
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(ImportFacialTransformNoScale, 0x20);
} // namespace anim
using animImportFacialTransformNoScale = anim::ImportFacialTransformNoScale;
} // namespace RED4ext

// clang-format on
