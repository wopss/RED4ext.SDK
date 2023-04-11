#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraAttachment.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraAddAttachmentsResult : ISerializable
{
    static constexpr const char* NAME = "toolsJiraAddAttachmentsResult";
    static constexpr const char* ALIAS = NAME;

    DynArray<tools::JiraAttachment> array; // 30
};
RED4EXT_ASSERT_SIZE(JiraAddAttachmentsResult, 0x40);
} // namespace tools
using toolsJiraAddAttachmentsResult = tools::JiraAddAttachmentsResult;
} // namespace RED4ext

// clang-format on
