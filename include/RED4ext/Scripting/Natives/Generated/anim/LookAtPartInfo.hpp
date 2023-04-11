#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtPartInfo
{
    static constexpr const char* NAME = "animLookAtPartInfo";
    static constexpr const char* ALIAS = "LookAtPartInfo";

    CName partName; // 00
    CName defaultPositionBoneName; // 08
};
RED4EXT_ASSERT_SIZE(LookAtPartInfo, 0x10);
} // namespace anim
using animLookAtPartInfo = anim::LookAtPartInfo;
using LookAtPartInfo = anim::LookAtPartInfo;
} // namespace RED4ext

// clang-format on
