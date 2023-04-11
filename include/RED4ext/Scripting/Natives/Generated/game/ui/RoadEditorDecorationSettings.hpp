#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RoadEditorDecorationSettings
{
    static constexpr const char* NAME = "gameuiRoadEditorDecorationSettings";
    static constexpr const char* ALIAS = NAME;

    CName libraryName; // 00
    float offset; // 08
    uint32_t repeatPatternDensity; // 0C
    uint32_t repeatPatternStartOffset; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(RoadEditorDecorationSettings, 0x18);
} // namespace game::ui
using gameuiRoadEditorDecorationSettings = game::ui::RoadEditorDecorationSettings;
} // namespace RED4ext

// clang-format on
