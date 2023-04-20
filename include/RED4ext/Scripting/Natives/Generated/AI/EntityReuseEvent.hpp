#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>

namespace RED4ext
{
namespace AI
{
struct EntityReuseEvent : AI::AIEvent
{
    static constexpr const char* NAME = "AIEntityReuseEvent";
    static constexpr const char* ALIAS = NAME;

    world::GlobalNodeID destination; // 50
};
RED4EXT_ASSERT_SIZE(EntityReuseEvent, 0x58);
} // namespace AI
using AIEntityReuseEvent = AI::EntityReuseEvent;
} // namespace RED4ext

// clang-format on
