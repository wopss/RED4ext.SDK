#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace quest
{
struct FulfillInfo
{
    static constexpr const char* NAME = "questFulfillInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x48 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(FulfillInfo, 0x48);
} // namespace quest
using questFulfillInfo = quest::FulfillInfo;
} // namespace RED4ext

// clang-format on
