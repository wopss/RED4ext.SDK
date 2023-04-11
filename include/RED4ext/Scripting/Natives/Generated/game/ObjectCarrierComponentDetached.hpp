#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct ObjectCarrierComponentDetached : red::Event
{
    static constexpr const char* NAME = "gameObjectCarrierComponentDetached";
    static constexpr const char* ALIAS = "ObjectCarrierComponentDetached";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ObjectCarrierComponentDetached, 0x50);
} // namespace game
using gameObjectCarrierComponentDetached = game::ObjectCarrierComponentDetached;
using ObjectCarrierComponentDetached = game::ObjectCarrierComponentDetached;
} // namespace RED4ext

// clang-format on
