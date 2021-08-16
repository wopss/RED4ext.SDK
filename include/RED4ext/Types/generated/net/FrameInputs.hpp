#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/net/InputAction.hpp>
#include <RED4ext/Types/generated/net/Time.hpp>

namespace RED4ext
{
namespace net { 
struct FrameInputs
{
    static constexpr const char* NAME = "netFrameInputs";
    static constexpr const char* ALIAS = NAME;

    DynArray<net::InputAction> inputBuffer; // 00
    net::Time timestamp; // 10
    uint8_t unk18[0x28 - 0x18]; // 18
    float cameraRotationYaw; // 28
    float cameraRotationPitch; // 2C
    float lookAtRotationYaw; // 30
    float lookAtRotationPitch; // 34
    float timeDelta; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(FrameInputs, 0x40);
} // namespace net
} // namespace RED4ext
