#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraService
{
    static constexpr const char* NAME = "toolsJiraService";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xE8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(JiraService, 0xE8);
} // namespace tools
using toolsJiraService = tools::JiraService;
} // namespace RED4ext

// clang-format on
