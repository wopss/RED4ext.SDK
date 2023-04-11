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
struct ICharacterConditionSubType : ISerializable
{
    static constexpr const char* NAME = "questICharacterConditionSubType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ICharacterConditionSubType, 0x30);
} // namespace quest
using questICharacterConditionSubType = quest::ICharacterConditionSubType;
} // namespace RED4ext

// clang-format on
