#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace effect { 
struct BaseItem : ISerializable
{
    static constexpr const char* NAME = "effectBaseItem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(BaseItem, 0x30);
} // namespace effect
} // namespace RED4ext
