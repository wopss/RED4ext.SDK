#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace sense
{
struct VisionBlockerTypeFlags
{
    static constexpr const char* NAME = "senseVisionBlockerTypeFlags";
    static constexpr const char* ALIAS = "VisionBlockerTypeFlags";

    uint8_t unk00[0x4 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(VisionBlockerTypeFlags, 0x4);
} // namespace sense
using senseVisionBlockerTypeFlags = sense::VisionBlockerTypeFlags;
using VisionBlockerTypeFlags = sense::VisionBlockerTypeFlags;
} // namespace RED4ext

// clang-format on
