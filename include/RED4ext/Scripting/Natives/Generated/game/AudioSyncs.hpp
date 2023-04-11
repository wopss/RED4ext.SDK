#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudEventStruct.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudSwitch.hpp>

namespace RED4ext
{
namespace game
{
struct AudioSyncs
{
    static constexpr const char* NAME = "gameAudioSyncs";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::AudSwitch> switchEvents; // 00
    DynArray<audio::AudEventStruct> playEvents; // 10
    DynArray<audio::AudEventStruct> stopEvents; // 20
    DynArray<audio::AudParameter> parameterEvents; // 30
};
RED4EXT_ASSERT_SIZE(AudioSyncs, 0x40);
} // namespace game
using gameAudioSyncs = game::AudioSyncs;
} // namespace RED4ext

// clang-format on
