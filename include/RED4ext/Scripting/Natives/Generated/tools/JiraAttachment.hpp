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
struct JiraAttachment
{
    static constexpr const char* NAME = "toolsJiraAttachment";
    static constexpr const char* ALIAS = NAME;

    String id; // 00
    String filename; // 20
    String content; // 40
    String thumbnail; // 60
};
RED4EXT_ASSERT_SIZE(JiraAttachment, 0x80);
} // namespace tools
using toolsJiraAttachment = tools::JiraAttachment;
} // namespace RED4ext

// clang-format on
