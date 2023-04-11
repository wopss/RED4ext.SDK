#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct FacialSetup_OneSermoBufferInfo
{
    static constexpr const char* NAME = "animFacialSetup_OneSermoBufferInfo";
    static constexpr const char* ALIAS = NAME;

    uint16_t numGlobalLimits; // 00
    uint16_t numInfluencedPoses; // 02
    uint16_t numInfluenceIndices; // 04
    uint16_t numUpperLowerFace; // 06
    uint16_t numLipsyncPosesSides; // 08
    uint16_t numAllCorrectives; // 0A
    uint16_t numGlobalCorrectiveEntries; // 0C
    uint16_t numInbetweenCorrectiveEntries; // 0E
    uint16_t numCorrectiveInfluencedPoses; // 10
    uint16_t numCorrectiveInfluenceIndices; // 12
    uint16_t numAllMainPoses; // 14
    uint16_t numAllMainPosesInbetweens; // 16
    uint16_t numAllMainPosesInbetweenScopeMultipliers; // 18
    uint16_t numEnvelopesPerTrackMapping; // 1A
    uint16_t wrinkleStartingIndex; // 1C
    uint16_t numWrinkles; // 1E
};
RED4EXT_ASSERT_SIZE(FacialSetup_OneSermoBufferInfo, 0x20);
} // namespace anim
using animFacialSetup_OneSermoBufferInfo = anim::FacialSetup_OneSermoBufferInfo;
} // namespace RED4ext

// clang-format on
