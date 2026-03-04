#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraAttachment.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraIssueFieldsResult
{
    static constexpr const char* NAME = "toolsJiraIssueFieldsResult";
    static constexpr const char* ALIAS = NAME;

    String summary; // 00
    String description; // 20
    String project; // 40
    String issuetype; // 60
    String priority; // 80
    String flagPosition; // A0
    String customfield_10013; // C0
    String customfield_18373; // E0
    String customfield_13009; // 100
    String customfield_10505; // 120
    String customfield_29900; // 140
    String customfield_18006; // 160
    String assignee; // 180
    String customfield_10006; // 1A0
    String customfield_25500; // 1C0
    String labels; // 1E0
    DynArray<tools::JiraAttachment> attachments; // 200
    String customfield_15306; // 210
    String fixVersions; // 230
    String versions; // 250
    String customfield_10002; // 270
    String customfield_10005; // 290
    String customfield_24700; // 2B0
    String customfield_10606; // 2D0
    String customfield_33701; // 2F0
    String customfield_10503; // 310
    String customfield_10502; // 330
    String customfield_34100; // 350
    String customfield_17400; // 370
    String customfield_15808; // 390
    String customfield_34718; // 3B0
    String customfield_34706; // 3D0
    String customfield_10603; // 3F0
    String customfield_36106; // 410
    String components; // 430
};
RED4EXT_ASSERT_SIZE(JiraIssueFieldsResult, 0x450);
} // namespace tools
using toolsJiraIssueFieldsResult = tools::JiraIssueFieldsResult;
} // namespace RED4ext

// clang-format on
