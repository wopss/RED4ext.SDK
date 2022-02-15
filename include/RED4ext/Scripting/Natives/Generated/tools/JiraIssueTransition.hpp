#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace tools { 
struct JiraIssueTransition
{
    static constexpr const char* NAME = "toolsJiraIssueTransition";
    static constexpr const char* ALIAS = NAME;

    CString id; // 00
};
RED4EXT_ASSERT_SIZE(JiraIssueTransition, 0x20);
} // namespace tools
} // namespace RED4ext
