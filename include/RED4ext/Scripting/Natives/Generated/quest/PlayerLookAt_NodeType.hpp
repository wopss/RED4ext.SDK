#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct PlayerLookAt_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questPlayerLookAt_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool useOffsetToPlayer; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    game::EntityReference objectRef; // 40
    CName slotName; // 78
    Vector3 offsetPos; // 80
    float duration; // 8C
    bool adjustPitch; // 90
    bool adjustYaw; // 91
    bool endOnTargetReached; // 92
    bool endOnCameraInputApplied; // 93
    bool endOnTimeExceeded; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
    float cameraInputMagToBreak; // 98
    float precision; // 9C
    float maxDuration; // A0
    bool easeIn; // A4
    bool easeOut; // A5
    uint8_t unkA6[0xA8 - 0xA6]; // A6
};
RED4EXT_ASSERT_SIZE(PlayerLookAt_NodeType, 0xA8);
} // namespace quest
using questPlayerLookAt_NodeType = quest::PlayerLookAt_NodeType;
} // namespace RED4ext

// clang-format on
