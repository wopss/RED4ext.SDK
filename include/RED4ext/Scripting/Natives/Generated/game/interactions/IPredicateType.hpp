#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct IPredicateType : ISerializable
{
    static constexpr const char* NAME = "gameinteractionsIPredicateType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IPredicateType, 0x30);
} // namespace game::interactions
using gameinteractionsIPredicateType = game::interactions::IPredicateType;
} // namespace RED4ext

// clang-format on
