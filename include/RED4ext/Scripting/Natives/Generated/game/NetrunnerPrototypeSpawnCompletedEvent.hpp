#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct NetrunnerPrototypeSpawnCompletedEvent : red::Event
{
    static constexpr const char* NAME = "gameNetrunnerPrototypeSpawnCompletedEvent";
    static constexpr const char* ALIAS = "NetrunnerPrototypeSpawnCompletedEvent";

    WeakHandle<game::Object> spawnedObject; // 40
};
RED4EXT_ASSERT_SIZE(NetrunnerPrototypeSpawnCompletedEvent, 0x50);
} // namespace game
using gameNetrunnerPrototypeSpawnCompletedEvent = game::NetrunnerPrototypeSpawnCompletedEvent;
using NetrunnerPrototypeSpawnCompletedEvent = game::NetrunnerPrototypeSpawnCompletedEvent;
} // namespace RED4ext

// clang-format on
