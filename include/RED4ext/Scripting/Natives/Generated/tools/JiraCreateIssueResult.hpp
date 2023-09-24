#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraIssueFieldsResult.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraCreateIssueResult : ISerializable
{
    static constexpr const char* NAME = "toolsJiraCreateIssueResult";
    static constexpr const char* ALIAS = NAME;

    CString id; // 30
    CString key; // 50
    DynArray<CString> errorMessages; // 70
    tools::JiraIssueFieldsResult errors; // 80
};
RED4EXT_ASSERT_SIZE(JiraCreateIssueResult, 0x4D0);
} // namespace tools
using toolsJiraCreateIssueResult = tools::JiraCreateIssueResult;
} // namespace RED4ext

// clang-format on
