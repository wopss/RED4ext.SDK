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

    CString summary; // 00
    CString description; // 20
    CString project; // 40
    CString issuetype; // 60
    CString priority; // 80
    CString flagPosition; // A0
    CString customfield_10013; // C0
    CString customfield_18373; // E0
    CString customfield_13009; // 100
    CString customfield_10505; // 120
    CString customfield_29900; // 140
    CString customfield_18006; // 160
    CString assignee; // 180
    CString customfield_10006; // 1A0
    CString customfield_25500; // 1C0
    CString labels; // 1E0
    DynArray<tools::JiraAttachment> attachments; // 200
    CString customfield_15306; // 210
    CString fixVersions; // 230
    CString versions; // 250
    CString customfield_10002; // 270
    CString customfield_10005; // 290
    CString customfield_24700; // 2B0
    CString customfield_10606; // 2D0
    CString customfield_33701; // 2F0
    CString customfield_10503; // 310
    CString customfield_10502; // 330
    CString customfield_34100; // 350
    CString customfield_17400; // 370
    CString customfield_15808; // 390
    CString customfield_34718; // 3B0
    CString customfield_34706; // 3D0
    CString customfield_10603; // 3F0
    CString customfield_36106; // 410
    CString components; // 430
};
RED4EXT_ASSERT_SIZE(JiraIssueFieldsResult, 0x450);
} // namespace tools
using toolsJiraIssueFieldsResult = tools::JiraIssueFieldsResult;
} // namespace RED4ext

// clang-format on
