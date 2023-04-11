#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EntitySettings.hpp>

namespace RED4ext
{
namespace audio
{
struct GenericEntitySettings : audio::EntitySettings
{
    static constexpr const char* NAME = "audioGenericEntitySettings";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(GenericEntitySettings, 0x88);
} // namespace audio
using audioGenericEntitySettings = audio::GenericEntitySettings;
} // namespace RED4ext

// clang-format on
