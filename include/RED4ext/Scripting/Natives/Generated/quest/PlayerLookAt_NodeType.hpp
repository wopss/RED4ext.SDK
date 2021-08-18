#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct PlayerLookAt_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questPlayerLookAt_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 38
    CName slotName; // 70
    Vector3 offsetPos; // 78
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
RED4EXT_ASSERT_SIZE(PlayerLookAt_NodeType, 0xA0);
} // namespace quest
} // namespace RED4ext
