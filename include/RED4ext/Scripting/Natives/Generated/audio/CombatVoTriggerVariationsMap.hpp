#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/CombatVoTriggerVariationsMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct CombatVoTriggerVariationsMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioCombatVoTriggerVariationsMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::CombatVoTriggerVariationsMapItem> voTriggerVariations; // 38
};
RED4EXT_ASSERT_SIZE(CombatVoTriggerVariationsMap, 0x48);
} // namespace audio
using audioCombatVoTriggerVariationsMap = audio::CombatVoTriggerVariationsMap;
} // namespace RED4ext

// clang-format on
