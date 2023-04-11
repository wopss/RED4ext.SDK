#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MusicSyncType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct MusicSyncEvent : red::Event
{
    static constexpr const char* NAME = "entMusicSyncEvent";
    static constexpr const char* ALIAS = "MusicSync";

    audio::MusicSyncType syncType; // 40
    float syncParameter; // 44
};
RED4EXT_ASSERT_SIZE(MusicSyncEvent, 0x48);
} // namespace ent
using entMusicSyncEvent = ent::MusicSyncEvent;
using MusicSync = ent::MusicSyncEvent;
} // namespace RED4ext

// clang-format on
