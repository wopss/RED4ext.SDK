#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct DeathParamsEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDeathParamsEvent";
    static constexpr const char* ALIAS = "gameDeathParamsEvent";

    bool noAnimation; // 40
    bool noRagdoll; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(DeathParamsEvent, 0x48);
} // namespace game::events
using gameeventsDeathParamsEvent = game::events::DeathParamsEvent;
using gameDeathParamsEvent = game::events::DeathParamsEvent;
} // namespace RED4ext

// clang-format on
