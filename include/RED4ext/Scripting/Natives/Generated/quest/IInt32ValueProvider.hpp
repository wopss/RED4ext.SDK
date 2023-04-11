#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace quest
{
struct IInt32ValueProvider : ISerializable
{
    static constexpr const char* NAME = "questIInt32ValueProvider";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IInt32ValueProvider, 0x30);
} // namespace quest
using questIInt32ValueProvider = quest::IInt32ValueProvider;
} // namespace RED4ext

// clang-format on
