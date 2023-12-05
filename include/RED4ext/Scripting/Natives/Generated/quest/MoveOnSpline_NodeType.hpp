#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/AIPathTrafficDeletionMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/PlayerToAIInterpolationType.hpp>

namespace RED4ext
{
namespace quest { struct IVehicleMoveOnSpline_Overrides; }
namespace vehicle { struct AudioVehicleCurveSet; }

namespace quest
{
struct MoveOnSpline_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questMoveOnSpline_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    NodeRef splineRef; // 68
    float startFrom; // 70
    vehicle::PlayerToAIInterpolationType blendType; // 74
    float blendTime; // 78
    bool reverseGear; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
    float sceneBlendInDistance; // 80
    float sceneBlendOutDistance; // 84
    bool arriveWithPivot; // 88
    uint8_t unk89[0x8C - 0x89]; // 89
    vehicle::AIPathTrafficDeletionMode trafficDeletionMode; // 8C
    Handle<quest::IVehicleMoveOnSpline_Overrides> overrides; // 90
    Ref<vehicle::AudioVehicleCurveSet> audioCurves; // A0
    uint8_t unkB8[0xC8 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(MoveOnSpline_NodeType, 0xC8);
} // namespace quest
using questMoveOnSpline_NodeType = quest::MoveOnSpline_NodeType;
} // namespace RED4ext

// clang-format on
