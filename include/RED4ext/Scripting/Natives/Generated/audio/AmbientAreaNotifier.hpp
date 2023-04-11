#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace audio { struct AmbientAreaSettings; }

namespace audio
{
struct AmbientAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "audioAmbientAreaNotifier";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::AmbientAreaSettings> Settings; // B8
    bool usePhysicsObstruction; // C8
    bool occlusionEnabled; // C9
    bool acousticRepositioningEnabled; // CA
    uint8_t unkCB[0xCC - 0xCB]; // CB
    float obstructionChangeTime; // CC
    bool overrideRolloff; // D0
    uint8_t unkD1[0xD4 - 0xD1]; // D1
    float rolloffOverride; // D4
    bool useAutoOutdoorness; // D8
    uint8_t unkD9[0xE0 - 0xD9]; // D9
};
RED4EXT_ASSERT_SIZE(AmbientAreaNotifier, 0xE0);
} // namespace audio
using audioAmbientAreaNotifier = audio::AmbientAreaNotifier;
} // namespace RED4ext

// clang-format on
