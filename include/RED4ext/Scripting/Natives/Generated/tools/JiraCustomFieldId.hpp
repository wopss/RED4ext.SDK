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
struct JiraCustomFieldId
{
    static constexpr const char* NAME = "toolsJiraCustomFieldId";
    static constexpr const char* ALIAS = NAME;

    CString id; // 00
};
RED4EXT_ASSERT_SIZE(JiraCustomFieldId, 0x20);
} // namespace tools
using toolsJiraCustomFieldId = tools::JiraCustomFieldId;
} // namespace RED4ext

// clang-format on
