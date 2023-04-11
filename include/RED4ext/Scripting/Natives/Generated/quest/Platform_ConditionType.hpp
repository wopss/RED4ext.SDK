#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Platform.hpp>

namespace RED4ext
{
namespace quest
{
struct Platform_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questPlatform_ConditionType";
    static constexpr const char* ALIAS = NAME;

    quest::Platform platform; // 38
    bool inverted; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
};
RED4EXT_ASSERT_SIZE(Platform_ConditionType, 0x40);
} // namespace quest
using questPlatform_ConditionType = quest::Platform_ConditionType;
} // namespace RED4ext

// clang-format on
