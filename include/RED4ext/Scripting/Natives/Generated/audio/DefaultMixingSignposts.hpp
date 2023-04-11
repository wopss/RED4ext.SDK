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
struct DefaultMixingSignposts : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioDefaultMixingSignposts";
    static constexpr const char* ALIAS = NAME;

    CName endOfCombat; // 38
    CName inCombat; // 40
    CName inStealth; // 48
    CName aiAlerted; // 50
    CName sceneBootstrapSignpost; // 58
    DynArray<CName> reservedSignposts; // 60
};
RED4EXT_ASSERT_SIZE(DefaultMixingSignposts, 0x70);
} // namespace audio
using audioDefaultMixingSignposts = audio::DefaultMixingSignposts;
} // namespace RED4ext

// clang-format on
