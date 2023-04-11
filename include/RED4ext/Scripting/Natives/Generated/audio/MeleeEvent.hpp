#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudSimpleParameter.hpp>

namespace RED4ext
{
namespace audio
{
struct MeleeEvent
{
    static constexpr const char* NAME = "audioMeleeEvent";
    static constexpr const char* ALIAS = NAME;

    CName event; // 00
    DynArray<audio::AudSimpleParameter> params; // 08
};
RED4EXT_ASSERT_SIZE(MeleeEvent, 0x18);
} // namespace audio
using audioMeleeEvent = audio::MeleeEvent;
} // namespace RED4ext

// clang-format on
