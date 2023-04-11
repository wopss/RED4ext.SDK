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
struct EditorSelectedMeleeWeapon : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioEditorSelectedMeleeWeapon";
    static constexpr const char* ALIAS = NAME;

    CName selectedWeaponConfigurationName; // 38
};
RED4EXT_ASSERT_SIZE(EditorSelectedMeleeWeapon, 0x40);
} // namespace audio
using audioEditorSelectedMeleeWeapon = audio::EditorSelectedMeleeWeapon;
} // namespace RED4ext

// clang-format on
