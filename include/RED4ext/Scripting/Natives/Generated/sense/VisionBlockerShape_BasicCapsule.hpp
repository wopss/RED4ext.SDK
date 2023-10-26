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
struct __declspec(align(0x10)) VisionBlockerShape_BasicCapsule : sense::IVisionBlockerShape
{
    static constexpr const char* NAME = "senseVisionBlockerShape_BasicCapsule";
    static constexpr const char* ALIAS = "VisionBlockerShape_BasicCapsule";

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(VisionBlockerShape_BasicCapsule, 0x60);
} // namespace sense
using senseVisionBlockerShape_BasicCapsule = sense::VisionBlockerShape_BasicCapsule;
using VisionBlockerShape_BasicCapsule = sense::VisionBlockerShape_BasicCapsule;
} // namespace RED4ext

// clang-format on
