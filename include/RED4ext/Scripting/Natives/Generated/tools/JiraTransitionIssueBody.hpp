#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraIssueTransition.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraTransitionIssueBody : ISerializable
{
    static constexpr const char* NAME = "toolsJiraTransitionIssueBody";
    static constexpr const char* ALIAS = NAME;

    tools::JiraIssueTransition transition; // 30
};
RED4EXT_ASSERT_SIZE(JiraTransitionIssueBody, 0x50);
} // namespace tools
using toolsJiraTransitionIssueBody = tools::JiraTransitionIssueBody;
} // namespace RED4ext

// clang-format on
