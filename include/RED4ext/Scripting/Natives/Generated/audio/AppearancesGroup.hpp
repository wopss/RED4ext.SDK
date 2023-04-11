#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AppearancesGroup : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAppearancesGroup";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> appearances; // 38
};
RED4EXT_ASSERT_SIZE(AppearancesGroup, 0x48);
} // namespace audio
using audioAppearancesGroup = audio::AppearancesGroup;
} // namespace RED4ext

// clang-format on
