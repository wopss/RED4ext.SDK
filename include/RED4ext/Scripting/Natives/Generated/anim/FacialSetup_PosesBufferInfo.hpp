#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FacialSetup_OneSermoPoseBufferInfo.hpp>

namespace RED4ext
{
namespace anim
{
struct FacialSetup_PosesBufferInfo
{
    static constexpr const char* NAME = "animFacialSetup_PosesBufferInfo";
    static constexpr const char* ALIAS = NAME;

    anim::FacialSetup_OneSermoPoseBufferInfo face; // 00
    anim::FacialSetup_OneSermoPoseBufferInfo tongue; // 14
    anim::FacialSetup_OneSermoPoseBufferInfo eyes; // 28
};
RED4EXT_ASSERT_SIZE(FacialSetup_PosesBufferInfo, 0x3C);
} // namespace anim
using animFacialSetup_PosesBufferInfo = anim::FacialSetup_PosesBufferInfo;
} // namespace RED4ext

// clang-format on
