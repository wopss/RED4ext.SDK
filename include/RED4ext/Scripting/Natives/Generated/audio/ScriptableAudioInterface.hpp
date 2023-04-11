#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace audio
{
struct ScriptableAudioInterface : IScriptable
{
    static constexpr const char* NAME = "audioScriptableAudioInterface";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ScriptableAudioInterface, 0x40);
} // namespace audio
using audioScriptableAudioInterface = audio::ScriptableAudioInterface;
} // namespace RED4ext

// clang-format on
