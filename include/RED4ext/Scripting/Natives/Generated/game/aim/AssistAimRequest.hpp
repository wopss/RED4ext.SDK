#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game::aim { 
struct AssistAimRequest
{
    static constexpr const char* NAME = "gameaimAssistAimRequest";
    static constexpr const char* ALIAS = "AimRequest";

    float duration; // 00
    bool adjustPitch; // 04
    bool adjustYaw; // 05
    bool endOnTargetReached; // 06
    bool endOnCameraInputApplied; // 07
    bool endOnTimeExceeded; // 08
    bool endOnAimingStopped; // 09
    uint8_t unk0A[0xC - 0xA]; // A
    float cameraInputMagToBreak; // 0C
    float precision; // 10
    float maxDuration; // 14
    bool easeIn; // 18
    bool easeOut; // 19
    bool checkRange; // 1A
    uint8_t unk1B[0x20 - 0x1B]; // 1B
    Vector4 lookAtTarget; // 20
    bool processAsInput; // 30
    uint8_t unk31[0x32 - 0x31]; // 31
    bool bodyPartsTracking; // 32
    uint8_t unk33[0x34 - 0x33]; // 33
    float bptMaxDot; // 34
    float bptMaxSwitches; // 38
    float bptMinInputMag; // 3C
    float bptMinResetInputMag; // 40
    uint8_t unk44[0xE0 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AssistAimRequest, 0xE0);
} // namespace game::aim
using AimRequest = game::aim::AssistAimRequest;
} // namespace RED4ext
