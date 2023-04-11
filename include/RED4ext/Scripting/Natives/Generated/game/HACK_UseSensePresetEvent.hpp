#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct HACK_UseSensePresetEvent : red::Event
{
    static constexpr const char* NAME = "gameHACK_UseSensePresetEvent";
    static constexpr const char* ALIAS = "HACK_UseSensePresetEvent";

    TweakDBID sensePreset; // 40
};
RED4EXT_ASSERT_SIZE(HACK_UseSensePresetEvent, 0x48);
} // namespace game
using gameHACK_UseSensePresetEvent = game::HACK_UseSensePresetEvent;
using HACK_UseSensePresetEvent = game::HACK_UseSensePresetEvent;
} // namespace RED4ext

// clang-format on
