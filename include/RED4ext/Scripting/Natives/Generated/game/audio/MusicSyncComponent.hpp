#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game::audio
{
struct MusicSyncComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameaudioMusicSyncComponent";
    static constexpr const char* ALIAS = NAME;

    bool notifyBeats; // 90
    bool notifyBars; // 91
    bool notifyGrid; // 92
    bool notifyBarProgression; // 93
    bool notifyBeatProgression; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
    CName syncTrack; // 98
    uint8_t unkA0[0xE8 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(MusicSyncComponent, 0xE8);
} // namespace game::audio
using gameaudioMusicSyncComponent = game::audio::MusicSyncComponent;
} // namespace RED4ext

// clang-format on
