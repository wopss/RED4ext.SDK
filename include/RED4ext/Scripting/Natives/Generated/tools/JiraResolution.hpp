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
struct JiraResolution
{
    static constexpr const char* NAME = "toolsJiraResolution";
    static constexpr const char* ALIAS = NAME;

    CString name; // 00
    CString id; // 20
};
RED4EXT_ASSERT_SIZE(JiraResolution, 0x40);
} // namespace tools
using toolsJiraResolution = tools::JiraResolution;
} // namespace RED4ext

// clang-format on
