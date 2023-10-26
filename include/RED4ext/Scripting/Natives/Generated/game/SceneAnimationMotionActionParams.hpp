#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountDescriptor.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SceneAnimationMotionActionParamsEasingType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SceneAnimationMotionActionParamsMotionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SceneAnimationMotionActionParamsPlacementMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScenePlayerAnimationParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AnimationMotionSample.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) SceneAnimationMotionActionParams : IScriptable
{
    static constexpr const char* NAME = "gameSceneAnimationMotionActionParams";
    static constexpr const char* ALIAS = "SceneAnimationMotionActionParams";

    game::SceneAnimationMotionActionParamsMotionType motionType; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
    WorldTransform placementTransform; // 50
    float motionBlendInTime; // 70
    float poseBlendInTime; // 74
    uint8_t unk78[0x88 - 0x78]; // 78
    game::SceneAnimationMotionActionParamsEasingType blendInCurve; // 88
    uint8_t unk8C[0xA8 - 0x8C]; // 8C
    CName animationName; // A8
    game::SceneAnimationMotionActionParamsPlacementMode placementMode; // B0
    float startTime; // B4
    float endTime; // B8
    float initialDt; // BC
    float globalTimeToAnimTime; // C0
    uint8_t unkC4[0xD8 - 0xC4]; // C4
    DynArray<scn::AnimationMotionSample> trajectoryLOD; // D8
    game::ScenePlayerAnimationParams playerParams; // E8
    uint8_t unk100[0x120 - 0x100]; // 100
    game::MountDescriptor mountDescriptor; // 120
    uint64_t dynamicAnimSetupHash; // 160
    uint8_t unk168[0x170 - 0x168]; // 168
};
RED4EXT_ASSERT_SIZE(SceneAnimationMotionActionParams, 0x170);
} // namespace game
using gameSceneAnimationMotionActionParams = game::SceneAnimationMotionActionParams;
using SceneAnimationMotionActionParams = game::SceneAnimationMotionActionParams;
} // namespace RED4ext

// clang-format on
