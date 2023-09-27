#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct SimpleMoveOnSplineParams
{
    static constexpr const char* NAME = "questSimpleMoveOnSplineParams";
    static constexpr const char* ALIAS = NAME;

    move::MovementType movementType; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    Handle<quest::UniversalRef> facingTargetRef; // 08
    bool rotateEntityTowardsFacingTarget; // 18
    bool snapToTerrain; // 19
    bool useOffMeshLinkReservation; // 1A
    bool allowCrowdOnPath; // 1B
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(SimpleMoveOnSplineParams, 0x20);
} // namespace quest
using questSimpleMoveOnSplineParams = quest::SimpleMoveOnSplineParams;
} // namespace RED4ext

// clang-format on
