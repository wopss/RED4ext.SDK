#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/RoadEditorDecorationSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/RoadEditorObstacleSettings.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RoadEditorSegment
{
    static constexpr const char* NAME = "gameuiRoadEditorSegment";
    static constexpr const char* ALIAS = NAME;

    uint32_t length; // 00
    float curve; // 04
    DynArray<game::ui::RoadEditorDecorationSettings> decorationSettings; // 08
    DynArray<game::ui::RoadEditorObstacleSettings> obstacleSettings; // 18
    bool hasCheckpoint; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(RoadEditorSegment, 0x30);
} // namespace game::ui
using gameuiRoadEditorSegment = game::ui::RoadEditorSegment;
} // namespace RED4ext

// clang-format on
