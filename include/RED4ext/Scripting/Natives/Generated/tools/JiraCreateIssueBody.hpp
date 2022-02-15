#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraIssueFields.hpp>

namespace RED4ext
{
namespace tools { 
struct JiraCreateIssueBody : ISerializable
{
    static constexpr const char* NAME = "toolsJiraCreateIssueBody";
    static constexpr const char* ALIAS = NAME;

    tools::JiraIssueFields fields; // 30
    uint8_t unk320[0x360 - 0x320]; // 320
};
RED4EXT_ASSERT_SIZE(JiraCreateIssueBody, 0x360);
} // namespace tools
} // namespace RED4ext
