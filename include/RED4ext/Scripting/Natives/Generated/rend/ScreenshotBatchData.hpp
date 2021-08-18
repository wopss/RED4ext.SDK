#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AbsolutePathSerializable.hpp>

namespace RED4ext
{
namespace rend { 
struct ScreenshotBatchData
{
    static constexpr const char* NAME = "rendScreenshotBatchData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    AbsolutePathSerializable batchPositionsPath; // 30
    float delayTime; // 50
    uint32_t numberOfCoordinatesToDump; // 54
};
RED4EXT_ASSERT_SIZE(ScreenshotBatchData, 0x58);
} // namespace rend
} // namespace RED4ext
