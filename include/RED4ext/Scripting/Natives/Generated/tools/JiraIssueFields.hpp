#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraAttachment.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraCustomFieldId.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraCustomFieldName.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraCustomFieldValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraFixVersion.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraIssueType.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraPriority.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraProject.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraResolution.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraStatus.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraIssueFields
{
    static constexpr const char* NAME = "toolsJiraIssueFields";
    static constexpr const char* ALIAS = NAME;

    CString summary; // 00
    CString description; // 20
    tools::JiraProject project; // 40
    tools::JiraStatus status; // 80
    tools::JiraResolution resolution; // C0
    tools::JiraIssueType issuetype; // 100
    tools::JiraPriority priority; // 120
    CString flagPosition; // 140
    CString customfield_10013; // 160
    CString customfield_18373; // 180
    CString customfield_13009; // 1A0
    tools::JiraCustomFieldValue customfield_10505; // 1C0
    tools::JiraCustomFieldValue customfield_29900; // 1E0
    CString customfield_18006; // 200
    tools::JiraCustomFieldName assignee; // 220
    CString customfield_10006; // 240
    CString customfield_31700; // 260
    tools::JiraCustomFieldValue customfield_25500; // 280
    DynArray<CString> labels; // 2A0
    DynArray<tools::JiraAttachment> attachment; // 2B0
    DynArray<tools::JiraCustomFieldValue> customfield_15306; // 2C0
    DynArray<tools::JiraFixVersion> fixVersions; // 2D0
    DynArray<tools::JiraCustomFieldId> versions; // 2E0
    uint8_t unk2F0[0x2F8 - 0x2F0]; // 2F0
    CString customfield_10005; // 2F8
    CString customfield_24700; // 318
    CString customfield_10606; // 338
    CString customfield_33701; // 358
    CString customfield_10503; // 378
    CString customfield_10502; // 398
    tools::JiraCustomFieldValue customfield_34100; // 3B8
    tools::JiraCustomFieldId customfield_17400; // 3D8
    DynArray<tools::JiraCustomFieldValue> customfield_15808; // 3F8
    DynArray<tools::JiraCustomFieldValue> customfield_34718; // 408
    DynArray<tools::JiraCustomFieldValue> customfield_34706; // 418
    DynArray<tools::JiraCustomFieldValue> customfield_10603; // 428
    DynArray<tools::JiraCustomFieldValue> customfield_36106; // 438
    DynArray<tools::JiraCustomFieldName> components; // 448
};
RED4EXT_ASSERT_SIZE(JiraIssueFields, 0x458);
} // namespace tools
using toolsJiraIssueFields = tools::JiraIssueFields;
} // namespace RED4ext

// clang-format on
