#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct FacialSetup_OneSermoPoseBufferInfo
{
    static constexpr const char* NAME = "animFacialSetup_OneSermoPoseBufferInfo";
    static constexpr const char* ALIAS = NAME;

    uint16_t numMainPoses; // 00
    uint16_t numCorrectivePoses; // 02
    uint32_t numMainTransforms; // 04
    uint32_t numMainScales; // 08
    uint32_t numCorrectiveTransforms; // 0C
    uint32_t numCorrectiveScales; // 10
};
RED4EXT_ASSERT_SIZE(FacialSetup_OneSermoPoseBufferInfo, 0x14);
} // namespace anim
using animFacialSetup_OneSermoPoseBufferInfo = anim::FacialSetup_OneSermoPoseBufferInfo;
} // namespace RED4ext

// clang-format on
