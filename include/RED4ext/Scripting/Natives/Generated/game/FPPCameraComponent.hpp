#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) FPPCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "gameFPPCameraComponent";
    static constexpr const char* ALIAS = "FPPCameraComponent";

    uint8_t unk320[0x3E0 - 0x320]; // 320
    float pitchMin; // 3E0
    float pitchMax; // 3E4
    float yawMaxLeft; // 3E8
    float yawMaxRight; // 3EC
    uint8_t unk3F0[0x3F6 - 0x3F0]; // 3F0
    bool headingLocked; // 3F6
    uint8_t unk3F7[0x498 - 0x3F7]; // 3F7
    float sensitivityMultX; // 498
    float sensitivityMultY; // 49C
    uint8_t unk4A0[0x4B0 - 0x4A0]; // 4A0
    CName timeDilationCurveName; // 4B0
    uint8_t unk4B8[0x510 - 0x4B8]; // 4B8
};
RED4EXT_ASSERT_SIZE(FPPCameraComponent, 0x510);
} // namespace game
using gameFPPCameraComponent = game::FPPCameraComponent;
using FPPCameraComponent = game::FPPCameraComponent;
} // namespace RED4ext

// clang-format on
