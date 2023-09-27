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
struct JiraEditIssueResult : ISerializable
{
    static constexpr const char* NAME = "toolsJiraEditIssueResult";
    static constexpr const char* ALIAS = NAME;

    DynArray<CString> errorMessages; // 30
    tools::JiraIssueFieldsResult errors; // 40
};
RED4EXT_ASSERT_SIZE(JiraEditIssueResult, 0x490);
} // namespace tools
using toolsJiraEditIssueResult = tools::JiraEditIssueResult;
} // namespace RED4ext

// clang-format on
