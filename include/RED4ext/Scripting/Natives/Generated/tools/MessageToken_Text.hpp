#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/IMessageToken.hpp>

namespace RED4ext
{
namespace tools
{
struct MessageToken_Text : tools::IMessageToken
{
    static constexpr const char* NAME = "toolsMessageToken_Text";
    static constexpr const char* ALIAS = NAME;

    CString text; // 30
};
RED4EXT_ASSERT_SIZE(MessageToken_Text, 0x50);
} // namespace tools
using toolsMessageToken_Text = tools::MessageToken_Text;
} // namespace RED4ext

// clang-format on
