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
struct __declspec(align(0x10)) VisionBlockerShape_BasicHemisphere : sense::IVisionBlockerShape
{
    static constexpr const char* NAME = "senseVisionBlockerShape_BasicHemisphere";
    static constexpr const char* ALIAS = "VisionBlockerShape_BasicHemisphere";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(VisionBlockerShape_BasicHemisphere, 0x50);
} // namespace sense
using senseVisionBlockerShape_BasicHemisphere = sense::VisionBlockerShape_BasicHemisphere;
using VisionBlockerShape_BasicHemisphere = sense::VisionBlockerShape_BasicHemisphere;
} // namespace RED4ext

// clang-format on
