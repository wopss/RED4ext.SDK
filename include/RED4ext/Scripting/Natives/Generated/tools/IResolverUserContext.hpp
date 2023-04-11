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
struct IResolverUserContext : ISerializable
{
    static constexpr const char* NAME = "toolsIResolverUserContext";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IResolverUserContext, 0x30);
} // namespace tools
using toolsIResolverUserContext = tools::IResolverUserContext;
} // namespace RED4ext

// clang-format on
