#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace population { 
struct Modifier : ISerializable
{
    static constexpr const char* NAME = "populationModifier";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Modifier, 0x30);
} // namespace population
} // namespace RED4ext
