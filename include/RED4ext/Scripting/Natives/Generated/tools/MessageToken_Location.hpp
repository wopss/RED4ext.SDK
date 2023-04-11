#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/IMessageToken.hpp>

namespace RED4ext
{
namespace tools { struct IMessageLocation; }

namespace tools
{
struct MessageToken_Location : tools::IMessageToken
{
    static constexpr const char* NAME = "toolsMessageToken_Location";
    static constexpr const char* ALIAS = NAME;

    Handle<tools::IMessageLocation> location; // 30
};
RED4EXT_ASSERT_SIZE(MessageToken_Location, 0x40);
} // namespace tools
using toolsMessageToken_Location = tools::MessageToken_Location;
} // namespace RED4ext

// clang-format on
