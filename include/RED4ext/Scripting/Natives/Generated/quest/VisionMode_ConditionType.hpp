#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VisionModeType.hpp>

namespace RED4ext
{
namespace quest
{
struct VisionMode_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questVisionMode_ConditionType";
    static constexpr const char* ALIAS = NAME;

    float timeInterval; // 38
    quest::VisionModeType visionModeType; // 3C
};
RED4EXT_ASSERT_SIZE(VisionMode_ConditionType, 0x40);
} // namespace quest
using questVisionMode_ConditionType = quest::VisionMode_ConditionType;
} // namespace RED4ext

// clang-format on
