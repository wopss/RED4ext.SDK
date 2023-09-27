#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVisionModeNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ResetScanningAngleThreshold_NodeType : quest::IVisionModeNodeType
{
    static constexpr const char* NAME = "questResetScanningAngleThreshold_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ResetScanningAngleThreshold_NodeType, 0x30);
} // namespace quest
using questResetScanningAngleThreshold_NodeType = quest::ResetScanningAngleThreshold_NodeType;
} // namespace RED4ext

// clang-format on
