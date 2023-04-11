#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SpawnNewFeedEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSpawnNewFeedEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SpawnNewFeedEvent, 0x50);
} // namespace game::ui
using gameuiSpawnNewFeedEvent = game::ui::SpawnNewFeedEvent;
} // namespace RED4ext

// clang-format on
