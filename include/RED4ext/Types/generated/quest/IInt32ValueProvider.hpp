#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace quest { 
struct IInt32ValueProvider : ISerializable
{
    static constexpr const char* NAME = "questIInt32ValueProvider";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IInt32ValueProvider, 0x30);
} // namespace quest
} // namespace RED4ext
