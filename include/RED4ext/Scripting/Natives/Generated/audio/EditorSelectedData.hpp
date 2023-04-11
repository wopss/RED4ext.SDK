#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct EditorSelectedData : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioEditorSelectedData";
    static constexpr const char* ALIAS = NAME;

    CName selectedWeaponConfigurationName; // 38
    CName selectedFootstepsEventName; // 40
};
RED4EXT_ASSERT_SIZE(EditorSelectedData, 0x48);
} // namespace audio
using audioEditorSelectedData = audio::EditorSelectedData;
} // namespace RED4ext

// clang-format on
