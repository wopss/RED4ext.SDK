#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::audio { struct ISoundComponentSubSystem; }

namespace game::audio
{
struct SoundComponentSubSystemWrapper : ISerializable
{
    static constexpr const char* NAME = "gameaudioSoundComponentSubSystemWrapper";
    static constexpr const char* ALIAS = NAME;

    Handle<game::audio::ISoundComponentSubSystem> type; // 30
};
RED4EXT_ASSERT_SIZE(SoundComponentSubSystemWrapper, 0x40);
} // namespace game::audio
using gameaudioSoundComponentSubSystemWrapper = game::audio::SoundComponentSubSystemWrapper;
} // namespace RED4ext

// clang-format on
