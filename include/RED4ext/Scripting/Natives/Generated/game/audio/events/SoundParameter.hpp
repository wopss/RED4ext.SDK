#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events { 
struct SoundParameter : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsSoundParameter";
    static constexpr const char* ALIAS = NAME;

    CName parameterName; // 40
    float parameterValue; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(SoundParameter, 0x50);
} // namespace game::audio::events
} // namespace RED4ext
