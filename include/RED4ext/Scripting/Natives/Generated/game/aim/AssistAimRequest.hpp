#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game::aim
{
struct __declspec(align(0x10)) AssistAimRequest
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
    float cameraMouseInputMagToBreak; // 10
    float precision; // 14
    float maxDuration; // 18
    bool easeIn; // 1C
    bool easeOut; // 1D
    bool checkRange; // 1E
    uint8_t unk1F[0x30 - 0x1F]; // 1F
    Vector4 lookAtTarget; // 30
    bool processAsInput; // 40
    uint8_t unk41[0x42 - 0x41]; // 41
    bool bodyPartsTracking; // 42
    uint8_t unk43[0x44 - 0x43]; // 43
    float bptMaxDot; // 44
    float bptMaxSwitches; // 48
    float bptMinInputMag; // 4C
    uint8_t unk50[0x54 - 0x50]; // 50
    float bptMinResetInputMag; // 54
    uint8_t unk58[0x100 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AssistAimRequest, 0x100);
} // namespace game::aim
using gameaimAssistAimRequest = game::aim::AssistAimRequest;
using AimRequest = game::aim::AssistAimRequest;
} // namespace RED4ext

// clang-format on
