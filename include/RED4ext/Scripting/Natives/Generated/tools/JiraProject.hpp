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
struct JiraProject
{
    static constexpr const char* NAME = "toolsJiraProject";
    static constexpr const char* ALIAS = NAME;

    CString key; // 00
    CString name; // 20
};
RED4EXT_ASSERT_SIZE(JiraProject, 0x40);
} // namespace tools
using toolsJiraProject = tools::JiraProject;
} // namespace RED4ext

// clang-format on
