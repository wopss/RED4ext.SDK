#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayAnimEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/fpp/BlendOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/fpp/GenderSpecificParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/fpp/ParallaxSpace.hpp>

namespace RED4ext
{
namespace scn { struct AnimName; }

namespace scn
{
struct PlayFPPControlAnimEvent : scn::PlayAnimEvent
{
    static constexpr const char* NAME = "scnPlayFPPControlAnimEvent";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::fpp::GenderSpecificParams> genderSpecificParams; // A0
    Handle<scn::AnimName> gameplayAnimName; // B0
    bool FPPControlActive; // C0
    uint8_t unkC1[0xC4 - 0xC1]; // C1
    scn::fpp::BlendOverride blendOverride; // C4
    bool cameraUseTrajectorySpace; // C8
    bool idleIsMountedWorkspot; // C9
    bool enableWorldSpaceSmoothing; // CA
    bool isSceneCarrying; // CB
    float cameraBlendInDuration; // CC
    float cameraBlendOutDuration; // D0
    bool stayInScene; // D4
    uint8_t unkD5[0xD8 - 0xD5]; // D5
    float vehicleProceduralCameraWeight; // D8
    float cameraParallaxWeight; // DC
    scn::fpp::ParallaxSpace cameraParallaxSpace; // E0
    float yawLimitLeft; // E4
    float yawLimitRight; // E8
    float pitchLimitTop; // EC
    float pitchLimitBottom; // F0
    uint8_t unkF4[0xF8 - 0xF4]; // F4
};
RED4EXT_ASSERT_SIZE(PlayFPPControlAnimEvent, 0xF8);
} // namespace scn
using scnPlayFPPControlAnimEvent = scn::PlayFPPControlAnimEvent;
} // namespace RED4ext

// clang-format on
