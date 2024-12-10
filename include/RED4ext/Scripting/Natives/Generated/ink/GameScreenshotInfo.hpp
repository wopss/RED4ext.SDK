#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink
{
struct GameScreenshotInfo
{
    static constexpr const char* NAME = "inkGameScreenshotInfo";
    static constexpr const char* ALIAS = "GameScreenshotInfo";

    CString path; // 00
    uint64_t creationDate; // 20
    uint32_t aspectRatioType; // 28
    uint32_t pathHash; // 2C
    int32_t screenshotIndex; // 30
    bool canBeDeleted; // 34
    uint8_t unk35[0x38 - 0x35]; // 35
};
RED4EXT_ASSERT_SIZE(GameScreenshotInfo, 0x38);
} // namespace ink
using inkGameScreenshotInfo = ink::GameScreenshotInfo;
using GameScreenshotInfo = ink::GameScreenshotInfo;
} // namespace RED4ext

// clang-format on
