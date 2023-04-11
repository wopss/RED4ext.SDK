#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct SoundParameter : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsSoundParameter";
    static constexpr const char* ALIAS = "SoundParameterEvent";

    CName parameterName; // 40
    float parameterValue; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(SoundParameter, 0x50);
} // namespace game::audio::events
using gameaudioeventsSoundParameter = game::audio::events::SoundParameter;
using SoundParameterEvent = game::audio::events::SoundParameter;
} // namespace RED4ext

// clang-format on
