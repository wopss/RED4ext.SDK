#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CameraFocus_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questCameraFocus_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 38
    float timeInterval; // 70
    bool onScreenTest; // 74
    bool useFrustrumCheck; // 75
    uint8_t unk76[0x78 - 0x76]; // 76
    float angleTolerance; // 78
    bool inverted; // 7C
    bool zoomed; // 7D
    uint8_t unk7E[0x80 - 0x7E]; // 7E
};
RED4EXT_ASSERT_SIZE(CameraFocus_ConditionType, 0x80);
} // namespace quest
using questCameraFocus_ConditionType = quest::CameraFocus_ConditionType;
} // namespace RED4ext

// clang-format on
