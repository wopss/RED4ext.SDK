#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::audio
{
struct IAudioSubSystem : IScriptable
{
    static constexpr const char* NAME = "gameaudioIAudioSubSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IAudioSubSystem, 0x48);
} // namespace game::audio
using gameaudioIAudioSubSystem = game::audio::IAudioSubSystem;
} // namespace RED4ext

// clang-format on
