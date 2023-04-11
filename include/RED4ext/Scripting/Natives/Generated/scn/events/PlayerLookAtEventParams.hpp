#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace scn::events
{
struct PlayerLookAtEventParams
{
    static constexpr const char* NAME = "scneventsPlayerLookAtEventParams";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 00
    Vector3 offsetPos; // 08
    float duration; // 14
    bool adjustPitch; // 18
    bool adjustYaw; // 19
    bool endOnTargetReached; // 1A
    bool endOnCameraInputApplied; // 1B
    bool endOnTimeExceeded; // 1C
    uint8_t unk1D[0x20 - 0x1D]; // 1D
    float cameraInputMagToBreak; // 20
    float precision; // 24
    float maxDuration; // 28
    bool easeIn; // 2C
    bool easeOut; // 2D
    uint8_t unk2E[0x30 - 0x2E]; // 2E
};
RED4EXT_ASSERT_SIZE(PlayerLookAtEventParams, 0x30);
} // namespace scn::events
using scneventsPlayerLookAtEventParams = scn::events::PlayerLookAtEventParams;
} // namespace RED4ext

// clang-format on
