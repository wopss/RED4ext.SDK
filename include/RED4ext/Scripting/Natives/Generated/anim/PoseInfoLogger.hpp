#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace anim { struct PoseInfoLoggerEntry; }

namespace anim
{
struct PoseInfoLogger
{
    static constexpr const char* NAME = "animPoseInfoLogger";
    static constexpr const char* ALIAS = NAME;

    bool enabled; // 00
    bool showStackTransformsCount; // 01
    bool showStackTracksCount; // 02
    uint8_t unk03[0x8 - 0x3]; // 3
    DynArray<Handle<anim::PoseInfoLoggerEntry>> entries; // 08
};
RED4EXT_ASSERT_SIZE(PoseInfoLogger, 0x18);
} // namespace anim
using animPoseInfoLogger = anim::PoseInfoLogger;
} // namespace RED4ext

// clang-format on
