#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ModioModProgressState.hpp>

namespace RED4ext
{
namespace ink
{
struct ModioModProgressInfo
{
    static constexpr const char* NAME = "inkModioModProgressInfo";
    static constexpr const char* ALIAS = "ModioModProgressInfo";

    int64_t modID; // 00
    ink::ModioModProgressState progressState; // 08
    float progressRate; // 0C
};
RED4EXT_ASSERT_SIZE(ModioModProgressInfo, 0x10);
} // namespace ink
using inkModioModProgressInfo = ink::ModioModProgressInfo;
using ModioModProgressInfo = ink::ModioModProgressInfo;
} // namespace RED4ext

// clang-format on
