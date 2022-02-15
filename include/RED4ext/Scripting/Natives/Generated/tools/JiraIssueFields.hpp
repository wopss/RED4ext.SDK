#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraAffectedVersion.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraAttachment.hpp>
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
namespace tools { 
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
    CString cameraLocation; // 160
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
    DynArray<tools::JiraAffectedVersion> versions; // 2E0
};
RED4EXT_ASSERT_SIZE(JiraIssueFields, 0x2F0);
} // namespace tools
} // namespace RED4ext
