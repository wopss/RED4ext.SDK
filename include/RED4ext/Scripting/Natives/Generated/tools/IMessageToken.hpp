#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace tools { 
struct IMessageToken : ISerializable
{
    static constexpr const char* NAME = "toolsIMessageToken";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IMessageToken, 0x30);
} // namespace tools
} // namespace RED4ext
