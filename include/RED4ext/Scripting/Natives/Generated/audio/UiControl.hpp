#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace audio { struct KeyUiSoundDictionary; }

namespace audio
{
struct UiControl
{
    static constexpr const char* NAME = "audioUiControl";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::KeyUiSoundDictionary> uiEventsByAction; // 00
};
RED4EXT_ASSERT_SIZE(UiControl, 0x10);
} // namespace audio
using audioUiControl = audio::UiControl;
} // namespace RED4ext

// clang-format on
