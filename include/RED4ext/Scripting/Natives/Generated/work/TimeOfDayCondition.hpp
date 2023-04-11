#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameTime.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCondition.hpp>

namespace RED4ext
{
namespace work
{
struct TimeOfDayCondition : work::IWorkspotCondition
{
    static constexpr const char* NAME = "workTimeOfDayCondition";
    static constexpr const char* ALIAS = NAME;

    GameTime activeAfter; // 38
    GameTime activeUntil; // 3C
};
RED4EXT_ASSERT_SIZE(TimeOfDayCondition, 0x40);
} // namespace work
using workTimeOfDayCondition = work::TimeOfDayCondition;
} // namespace RED4ext

// clang-format on
