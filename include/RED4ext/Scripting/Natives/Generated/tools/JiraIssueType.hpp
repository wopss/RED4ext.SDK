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
struct JiraIssueType
{
    static constexpr const char* NAME = "toolsJiraIssueType";
    static constexpr const char* ALIAS = NAME;

    CString name; // 00
};
RED4EXT_ASSERT_SIZE(JiraIssueType, 0x20);
} // namespace tools
using toolsJiraIssueType = tools::JiraIssueType;
} // namespace RED4ext

// clang-format on
