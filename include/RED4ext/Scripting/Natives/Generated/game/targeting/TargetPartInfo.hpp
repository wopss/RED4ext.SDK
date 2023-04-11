#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::targeting
{
struct TargetPartInfo
{
    static constexpr const char* NAME = "gametargetingTargetPartInfo";
    static constexpr const char* ALIAS = "TS_TargetPartInfo";

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(TargetPartInfo, 0x18);
} // namespace game::targeting
using gametargetingTargetPartInfo = game::targeting::TargetPartInfo;
using TS_TargetPartInfo = game::targeting::TargetPartInfo;
} // namespace RED4ext

// clang-format on
