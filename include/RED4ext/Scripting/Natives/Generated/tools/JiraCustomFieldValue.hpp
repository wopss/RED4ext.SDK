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
struct JiraCustomFieldValue
{
    static constexpr const char* NAME = "toolsJiraCustomFieldValue";
    static constexpr const char* ALIAS = NAME;

    CString value; // 00
};
RED4EXT_ASSERT_SIZE(JiraCustomFieldValue, 0x20);
} // namespace tools
using toolsJiraCustomFieldValue = tools::JiraCustomFieldValue;
} // namespace RED4ext

// clang-format on
