#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraCommentIssueResult : ISerializable
{
    static constexpr const char* NAME = "toolsJiraCommentIssueResult";
    static constexpr const char* ALIAS = NAME;

    DynArray<CString> errorMessages; // 30
};
RED4EXT_ASSERT_SIZE(JiraCommentIssueResult, 0x40);
} // namespace tools
using toolsJiraCommentIssueResult = tools::JiraCommentIssueResult;
} // namespace RED4ext

// clang-format on
