#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::targeting
{
struct SystemObjectLookedAtEvent : red::Event
{
    static constexpr const char* NAME = "gametargetingSystemObjectLookedAtEvent";
    static constexpr const char* ALIAS = "ObjectLookedAtEvent";

    ent::EntityID ownerID; // 40
    bool state; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(SystemObjectLookedAtEvent, 0x50);
} // namespace game::targeting
using gametargetingSystemObjectLookedAtEvent = game::targeting::SystemObjectLookedAtEvent;
using ObjectLookedAtEvent = game::targeting::SystemObjectLookedAtEvent;
} // namespace RED4ext

// clang-format on
