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
struct JiraEditIssueBody : ISerializable
{
    static constexpr const char* NAME = "toolsJiraEditIssueBody";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x90 - 0x30]; // 30
    tools::JiraIssueFields fields; // 90
    uint8_t unk4E8[0x528 - 0x4E8]; // 4E8
};
RED4EXT_ASSERT_SIZE(JiraEditIssueBody, 0x528);
} // namespace tools
using toolsJiraEditIssueBody = tools::JiraEditIssueBody;
} // namespace RED4ext

// clang-format on
