#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace work {
enum class WorkspotDebugMode : int32_t
{
    VisualLogToogle = 2,
    VisualLogOn = 4,
    VisualLogOff = 8,
    VisualStateToogle = 16,
    VisualStateOn = 32,
    VisualStateOff = 64,
    RecorderOn = 128,
    RecorderOff = 256,
    PlaybackOn = 512,
    PlaybackOff = 1024,
    Invalid = 4096,
    FunctionalTests = 8192,
};
} // namespace work
using workWorkspotDebugMode = work::WorkspotDebugMode;
} // namespace RED4ext

// clang-format on
