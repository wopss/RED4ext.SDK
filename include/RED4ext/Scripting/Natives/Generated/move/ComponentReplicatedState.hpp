#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace move { 
struct ComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "moveComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

    Quaternion rotation; // 20
    Vector3 position; // 30
    Vector3 linearVelocity; // 3C
    int16_t teleportCount; // 48
    uint8_t unk4A[0x4B - 0x4A]; // 4A
    bool touchesGround; // 4B
    bool touchesWalls; // 4C
    bool physicalMove; // 4D
    uint8_t unk4E[0x98 - 0x4E]; // 4E
    net::Time inputTimestamp; // 98
};
RED4EXT_ASSERT_SIZE(ComponentReplicatedState, 0xA0);
} // namespace move
} // namespace RED4ext
