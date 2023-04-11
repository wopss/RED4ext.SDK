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
struct IMessageLocation : ISerializable
{
    static constexpr const char* NAME = "toolsIMessageLocation";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IMessageLocation, 0x30);
} // namespace tools
using toolsIMessageLocation = tools::IMessageLocation;
} // namespace RED4ext

// clang-format on
