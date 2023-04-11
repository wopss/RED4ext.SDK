#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraCommentIssueBody : ISerializable
{
    static constexpr const char* NAME = "toolsJiraCommentIssueBody";
    static constexpr const char* ALIAS = NAME;

    CString body; // 30
};
RED4EXT_ASSERT_SIZE(JiraCommentIssueBody, 0x50);
} // namespace tools
using toolsJiraCommentIssueBody = tools::JiraCommentIssueBody;
} // namespace RED4ext

// clang-format on
