#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace game { 
struct FPPCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "gameFPPCameraComponent";
    static constexpr const char* ALIAS = "FPPCameraComponent";

    uint8_t unk2A0[0x360 - 0x2A0]; // 2A0
    float pitchMin; // 360
    float pitchMax; // 364
    float yawMaxLeft; // 368
    float yawMaxRight; // 36C
    bool headingLocked; // 370
    uint8_t unk371[0x464 - 0x371]; // 371
    float sensitivityMultX; // 464
    float sensitivityMultY; // 468
    uint8_t unk46C[0x478 - 0x46C]; // 46C
    CName timeDilationCurveName; // 478
    uint8_t unk480[0x4D0 - 0x480]; // 480
};
RED4EXT_ASSERT_SIZE(FPPCameraComponent, 0x4D0);
} // namespace game
using FPPCameraComponent = game::FPPCameraComponent;
} // namespace RED4ext
