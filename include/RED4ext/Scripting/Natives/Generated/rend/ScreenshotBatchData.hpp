#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AbsolutePathSerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/EStreamingObserverMode.hpp>

namespace RED4ext
{
namespace rend
{
struct ScreenshotBatchData
{
    static constexpr const char* NAME = "rendScreenshotBatchData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    AbsolutePathSerializable batchPositionsPath; // 30
    float delayTime; // 50
    uint32_t numberOfCoordinatesToDump; // 54
    rend::EStreamingObserverMode streamingObserverMode; // 58
    bool mergeScreenshots; // 59
    uint8_t unk5A[0x60 - 0x5A]; // 5A
};
RED4EXT_ASSERT_SIZE(ScreenshotBatchData, 0x60);
} // namespace rend
using rendScreenshotBatchData = rend::ScreenshotBatchData;
} // namespace RED4ext

// clang-format on
