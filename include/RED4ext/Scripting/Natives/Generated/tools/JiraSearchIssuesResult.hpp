#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/JiraIssue.hpp>

namespace RED4ext
{
namespace tools
{
struct JiraSearchIssuesResult : ISerializable
{
    static constexpr const char* NAME = "toolsJiraSearchIssuesResult";
    static constexpr const char* ALIAS = NAME;

    uint32_t startAt; // 30
    uint32_t maxResults; // 34
    uint32_t total; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    DynArray<tools::JiraIssue> issues; // 40
    DynArray<CString> errorMessages; // 50
    DynArray<CString> warningMessages; // 60
};
RED4EXT_ASSERT_SIZE(JiraSearchIssuesResult, 0x70);
} // namespace tools
using toolsJiraSearchIssuesResult = tools::JiraSearchIssuesResult;
} // namespace RED4ext

// clang-format on
