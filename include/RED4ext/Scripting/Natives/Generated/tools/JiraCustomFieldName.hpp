#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraCustomFieldName
{
    static constexpr const char* NAME = "toolsJiraCustomFieldName";
    static constexpr const char* ALIAS = NAME;

    CString name; // 00
};
RED4EXT_ASSERT_SIZE(JiraCustomFieldName, 0x20);
} // namespace tools
using toolsJiraCustomFieldName = tools::JiraCustomFieldName;
} // namespace RED4ext

// clang-format on
