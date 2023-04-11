#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraStatus
{
    static constexpr const char* NAME = "toolsJiraStatus";
    static constexpr const char* ALIAS = NAME;

    CString name; // 00
    CString id; // 20
};
RED4EXT_ASSERT_SIZE(JiraStatus, 0x40);
} // namespace tools
using toolsJiraStatus = tools::JiraStatus;
} // namespace RED4ext

// clang-format on
