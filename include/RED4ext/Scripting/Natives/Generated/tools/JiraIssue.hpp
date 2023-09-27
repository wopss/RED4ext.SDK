#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraIssueFields.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraIssue
{
    static constexpr const char* NAME = "toolsJiraIssue";
    static constexpr const char* ALIAS = NAME;

    CString id; // 00
    CString key; // 20
    CString self; // 40
    tools::JiraIssueFields fields; // 60
};
RED4EXT_ASSERT_SIZE(JiraIssue, 0x4B8);
} // namespace tools
using toolsJiraIssue = tools::JiraIssue;
} // namespace RED4ext

// clang-format on
