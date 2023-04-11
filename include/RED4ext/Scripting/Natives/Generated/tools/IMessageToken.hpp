#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace tools
{
struct IMessageToken : ISerializable
{
    static constexpr const char* NAME = "toolsIMessageToken";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IMessageToken, 0x30);
} // namespace tools
using toolsIMessageToken = tools::IMessageToken;
} // namespace RED4ext

// clang-format on
