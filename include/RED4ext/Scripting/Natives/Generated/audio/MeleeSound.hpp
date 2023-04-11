#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeEvent.hpp>

namespace RED4ext
{
namespace audio
{
struct MeleeSound
{
    static constexpr const char* NAME = "audioMeleeSound";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::MeleeEvent> events; // 00
};
RED4EXT_ASSERT_SIZE(MeleeSound, 0x10);
} // namespace audio
using audioMeleeSound = audio::MeleeSound;
} // namespace RED4ext

// clang-format on
