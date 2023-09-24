#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct PlayerLookAtParams : ISerializable
{
    static constexpr const char* NAME = "questPlayerLookAtParams";
    static constexpr const char* ALIAS = NAME;

    bool useOffsetToPlayer; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    game::EntityReference lookAtTarget; // 38
    CName slotName; // 70
    Vector3 offset; // 78
    float duration; // 84
    bool adjustPitch; // 88
    bool adjustYaw; // 89
    bool endOnTargetReached; // 8A
    bool endOnCameraInputApplied; // 8B
    bool endOnTimeExceeded; // 8C
    uint8_t unk8D[0x90 - 0x8D]; // 8D
    float cameraInputMagToBreak; // 90
    float precision; // 94
    float maxDuration; // 98
    bool easeIn; // 9C
    bool easeOut; // 9D
    uint8_t unk9E[0xA0 - 0x9E]; // 9E
};
RED4EXT_ASSERT_SIZE(PlayerLookAtParams, 0xA0);
} // namespace quest
using questPlayerLookAtParams = quest::PlayerLookAtParams;
} // namespace RED4ext

// clang-format on
