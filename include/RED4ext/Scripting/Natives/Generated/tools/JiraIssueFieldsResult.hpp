#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraAttachment.hpp>

namespace RED4ext
{
namespace tools { 
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
    CString cameraLocation; // C0
    CString customfield_18373; // E0
    CString customfield_13009; // 100
    CString customfield_10505; // 120
    uint8_t unk140[0x160 - 0x140]; // 140
    CString assignee; // 160
    CString customfield_25500; // 180
    DynArray<CString> labels; // 1A0
    DynArray<tools::JiraAttachment> attachment; // 1B0
    DynArray<CString> customfield_15306; // 1C0
    DynArray<CString> fixVersions; // 1D0
};
RED4EXT_ASSERT_SIZE(JiraIssueFieldsResult, 0x1E0);
} // namespace tools
} // namespace RED4ext
