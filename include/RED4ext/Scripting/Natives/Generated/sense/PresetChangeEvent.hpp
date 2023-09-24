#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/VisibilityEvent.hpp>

namespace RED4ext
{
namespace sense
{
struct PresetChangeEvent : sense::VisibilityEvent
{
    static constexpr const char* NAME = "sensePresetChangeEvent";
    static constexpr const char* ALIAS = "SensePresetChangeEvent";

    TweakDBID presetID; // 68
    bool mainPreset; // 70
    bool reset; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
};
RED4EXT_ASSERT_SIZE(PresetChangeEvent, 0x78);
} // namespace sense
using sensePresetChangeEvent = sense::PresetChangeEvent;
using SensePresetChangeEvent = sense::PresetChangeEvent;
} // namespace RED4ext

// clang-format on
