#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AllowVehicleCollisionRagdollInSceneEvent : red::Event
{
    static constexpr const char* NAME = "entAllowVehicleCollisionRagdollInSceneEvent";
    static constexpr const char* ALIAS = NAME;

    bool allow; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(AllowVehicleCollisionRagdollInSceneEvent, 0x48);
} // namespace ent
using entAllowVehicleCollisionRagdollInSceneEvent = ent::AllowVehicleCollisionRagdollInSceneEvent;
} // namespace RED4ext

// clang-format on
