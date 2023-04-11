#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { struct KeyUiControlDictionary; }

namespace audio
{
struct UiControlMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioUiControlMap";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::KeyUiControlDictionary> uiControlsByName; // 38
};
RED4EXT_ASSERT_SIZE(UiControlMap, 0x48);
} // namespace audio
using audioUiControlMap = audio::UiControlMap;
} // namespace RED4ext

// clang-format on
