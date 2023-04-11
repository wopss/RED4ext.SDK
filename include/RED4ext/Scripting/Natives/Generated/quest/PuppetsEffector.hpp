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
struct PuppetsEffector : ISerializable
{
    static constexpr const char* NAME = "questPuppetsEffector";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PuppetsEffector, 0x30);
} // namespace quest
using questPuppetsEffector = quest::PuppetsEffector;
} // namespace RED4ext

// clang-format on
