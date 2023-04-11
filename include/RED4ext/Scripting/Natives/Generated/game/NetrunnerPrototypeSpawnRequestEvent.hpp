#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct NetrunnerPrototypeSpawnRequestEvent : red::Event
{
    static constexpr const char* NAME = "gameNetrunnerPrototypeSpawnRequestEvent";
    static constexpr const char* ALIAS = "NetrunnerPrototypeSpawnRequestEvent";

    CName whatToSpawn; // 40
    Vector3 whereToSpawn; // 48
    Vector3 scale; // 54
    uint8_t colorIndex; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(NetrunnerPrototypeSpawnRequestEvent, 0x68);
} // namespace game
using gameNetrunnerPrototypeSpawnRequestEvent = game::NetrunnerPrototypeSpawnRequestEvent;
using NetrunnerPrototypeSpawnRequestEvent = game::NetrunnerPrototypeSpawnRequestEvent;
} // namespace RED4ext

// clang-format on
