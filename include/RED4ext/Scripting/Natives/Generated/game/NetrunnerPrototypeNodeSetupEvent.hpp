#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct NetrunnerPrototypeNodeSetupEvent : red::Event
{
    static constexpr const char* NAME = "gameNetrunnerPrototypeNodeSetupEvent";
    static constexpr const char* ALIAS = "NetrunnerPrototypeNodeSetupEvent";

    Vector3 scale; // 40
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(NetrunnerPrototypeNodeSetupEvent, 0x50);
} // namespace game
using gameNetrunnerPrototypeNodeSetupEvent = game::NetrunnerPrototypeNodeSetupEvent;
using NetrunnerPrototypeNodeSetupEvent = game::NetrunnerPrototypeNodeSetupEvent;
} // namespace RED4ext

// clang-format on
