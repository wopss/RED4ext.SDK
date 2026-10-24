#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class ModioReportType : int8_t
{
    Generic = 0,
    DMCA = 1,
    NotWorking = 2,
    RudeContent = 3,
    IllegalContent = 4,
    StolenContent = 5,
    FalseInformation = 6,
    Other = 7,
};
} // namespace ink
using inkModioReportType = ink::ModioReportType;
} // namespace RED4ext

// clang-format on
