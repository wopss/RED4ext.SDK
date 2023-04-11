#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ImportFacialCorrectivePoseDesc.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ImportFacialInitialControlsDesc.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ImportFacialInitialPoseEntryDesc.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ImportFacialMainPoseDesc.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLimitWeights.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SermoPoseInfo.hpp>

namespace RED4ext
{
namespace anim
{
struct ImportFacialSetupDesc
{
    static constexpr const char* NAME = "animImportFacialSetupDesc";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::ImportFacialInitialPoseEntryDesc> initialPose; // 00
    anim::ImportFacialInitialControlsDesc initialControls; // 10
    DynArray<anim::ImportFacialMainPoseDesc> mainPoses; // 40
    DynArray<anim::ImportFacialCorrectivePoseDesc> correctivePoses; // 50
    DynArray<anim::PoseLimitWeights> globalPoseLimits; // 60
    DynArray<anim::SermoPoseInfo> mainPosesInfo; // 70
    DynArray<int16_t> jawAreaTrackIndices; // 80
    DynArray<int16_t> lipsAreaTrackIndices; // 90
    DynArray<int16_t> eyesAreaTrackIndices; // A0
    uint16_t wrinkleStartingIndex; // B0
    uint8_t unkB2[0xB8 - 0xB2]; // B2
    DynArray<uint16_t> wrinkleMapping; // B8
    uint16_t numCachedPoseTracks; // C8
    uint8_t unkCA[0xD0 - 0xCA]; // CA
};
RED4EXT_ASSERT_SIZE(ImportFacialSetupDesc, 0xD0);
} // namespace anim
using animImportFacialSetupDesc = anim::ImportFacialSetupDesc;
} // namespace RED4ext

// clang-format on
