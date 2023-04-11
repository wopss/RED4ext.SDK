#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct SermoPoseInfo
{
    static constexpr const char* NAME = "animSermoPoseInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t type; // 00
    uint8_t lod; // 01
    uint16_t trackIndex; // 02
};
RED4EXT_ASSERT_SIZE(SermoPoseInfo, 0x4);
} // namespace anim
using animSermoPoseInfo = anim::SermoPoseInfo;
} // namespace RED4ext

// clang-format on
