#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct OpenPhotoMode_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questOpenPhotoMode_NodeType";
    static constexpr const char* ALIAS = NAME;

    CString factName; // 38
    bool forceFppMode; // 58
    bool alwaysAllowTPP; // 59
    bool lockExitUntilScreenshot; // 5A
    uint8_t unk5B[0x60 - 0x5B]; // 5B
};
RED4EXT_ASSERT_SIZE(OpenPhotoMode_NodeType, 0x60);
} // namespace quest
using questOpenPhotoMode_NodeType = quest::OpenPhotoMode_NodeType;
} // namespace RED4ext

// clang-format on
