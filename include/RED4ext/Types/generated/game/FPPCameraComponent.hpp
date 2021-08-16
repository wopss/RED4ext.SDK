#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace game { 
struct FPPCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "gameFPPCameraComponent";
    static constexpr const char* ALIAS = "FPPCameraComponent";

    uint8_t unk290[0x350 - 0x290]; // 290
    float pitchMin; // 350
    float pitchMax; // 354
    float yawMaxLeft; // 358
    float yawMaxRight; // 35C
    bool headingLocked; // 360
    uint8_t unk361[0x454 - 0x361]; // 361
    float sensitivityMultX; // 454
    float sensitivityMultY; // 458
    uint8_t unk45C[0x468 - 0x45C]; // 45C
    CName timeDilationCurveName; // 468
    uint8_t unk470[0x4C0 - 0x470]; // 470
};
RED4EXT_ASSERT_SIZE(FPPCameraComponent, 0x4C0);
} // namespace game
using FPPCameraComponent = game::FPPCameraComponent;
} // namespace RED4ext
