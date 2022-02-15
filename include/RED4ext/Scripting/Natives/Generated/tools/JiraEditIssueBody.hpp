#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraIssueFields.hpp>

namespace RED4ext
{
namespace tools { 
struct JiraEditIssueBody : ISerializable
{
    static constexpr const char* NAME = "toolsJiraEditIssueBody";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x90 - 0x30]; // 30
    tools::JiraIssueFields fields; // 90
    uint8_t unk380[0x3C0 - 0x380]; // 380
};
RED4EXT_ASSERT_SIZE(JiraEditIssueBody, 0x3C0);
} // namespace tools
} // namespace RED4ext
