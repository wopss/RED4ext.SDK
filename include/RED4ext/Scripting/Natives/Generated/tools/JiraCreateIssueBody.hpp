#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraIssueFields.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraCreateIssueBody : ISerializable
{
    static constexpr const char* NAME = "toolsJiraCreateIssueBody";
    static constexpr const char* ALIAS = NAME;

    tools::JiraIssueFields fields; // 30
    uint8_t unk488[0x4C8 - 0x488]; // 488
};
RED4EXT_ASSERT_SIZE(JiraCreateIssueBody, 0x4C8);
} // namespace tools
using toolsJiraCreateIssueBody = tools::JiraCreateIssueBody;
} // namespace RED4ext

// clang-format on
