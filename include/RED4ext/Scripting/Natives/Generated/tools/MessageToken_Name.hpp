#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/IMessageToken.hpp>

namespace RED4ext
{
namespace tools
{
struct MessageToken_Name : tools::IMessageToken
{
    static constexpr const char* NAME = "toolsMessageToken_Name";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
};
RED4EXT_ASSERT_SIZE(MessageToken_Name, 0x38);
} // namespace tools
using toolsMessageToken_Name = tools::MessageToken_Name;
} // namespace RED4ext

// clang-format on
