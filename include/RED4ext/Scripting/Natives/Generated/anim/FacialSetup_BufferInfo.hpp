#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FacialSetup_OneSermoBufferInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FacialSetup_TracksMapping.hpp>

namespace RED4ext
{
namespace anim
{
struct FacialSetup_BufferInfo
{
    static constexpr const char* NAME = "animFacialSetup_BufferInfo";
    static constexpr const char* ALIAS = NAME;

    anim::FacialSetup_TracksMapping tracksMapping; // 00
    uint16_t numLipsyncOverridesIndexMapping; // 08
    uint16_t numJointRegions; // 0A
    anim::FacialSetup_OneSermoBufferInfo face; // 0C
    anim::FacialSetup_OneSermoBufferInfo eyes; // 2C
    anim::FacialSetup_OneSermoBufferInfo tongue; // 4C
};
RED4EXT_ASSERT_SIZE(FacialSetup_BufferInfo, 0x6C);
} // namespace anim
using animFacialSetup_BufferInfo = anim::FacialSetup_BufferInfo;
} // namespace RED4ext

// clang-format on
