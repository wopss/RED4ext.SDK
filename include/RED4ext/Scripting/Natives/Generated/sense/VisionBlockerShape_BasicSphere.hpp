#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/IVisionBlockerShape.hpp>

namespace RED4ext
{
namespace sense
{
struct __declspec(align(0x10)) VisionBlockerShape_BasicSphere : sense::IVisionBlockerShape
{
    static constexpr const char* NAME = "senseVisionBlockerShape_BasicSphere";
    static constexpr const char* ALIAS = "VisionBlockerShape_BasicSphere";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(VisionBlockerShape_BasicSphere, 0x50);
} // namespace sense
using senseVisionBlockerShape_BasicSphere = sense::VisionBlockerShape_BasicSphere;
using VisionBlockerShape_BasicSphere = sense::VisionBlockerShape_BasicSphere;
} // namespace RED4ext

// clang-format on
