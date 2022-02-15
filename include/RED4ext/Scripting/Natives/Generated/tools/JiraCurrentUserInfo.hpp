#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace tools { 
struct JiraCurrentUserInfo : ISerializable
{
    static constexpr const char* NAME = "toolsJiraCurrentUserInfo";
    static constexpr const char* ALIAS = NAME;

    CString name; // 30
};
RED4EXT_ASSERT_SIZE(JiraCurrentUserInfo, 0x50);
} // namespace tools
} // namespace RED4ext
