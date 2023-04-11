#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace audio::ui
{
struct AudioHandler : IScriptable
{
    static constexpr const char* NAME = "audiouiAudioHandler";
    static constexpr const char* ALIAS = "UIAudioHandler";

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AudioHandler, 0x60);
} // namespace audio::ui
using audiouiAudioHandler = audio::ui::AudioHandler;
using UIAudioHandler = audio::ui::AudioHandler;
} // namespace RED4ext

// clang-format on
