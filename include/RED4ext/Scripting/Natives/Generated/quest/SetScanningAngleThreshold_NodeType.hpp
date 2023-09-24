#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVisionModeNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetScanningAngleThreshold_NodeType : quest::IVisionModeNodeType
{
    static constexpr const char* NAME = "questSetScanningAngleThreshold_NodeType";
    static constexpr const char* ALIAS = NAME;

    float angleThreshold; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    CName debugSource; // 38
};
RED4EXT_ASSERT_SIZE(SetScanningAngleThreshold_NodeType, 0x40);
} // namespace quest
using questSetScanningAngleThreshold_NodeType = quest::SetScanningAngleThreshold_NodeType;
} // namespace RED4ext

// clang-format on
