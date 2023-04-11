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
struct IRewardManagerNodeType : ISerializable
{
    static constexpr const char* NAME = "questIRewardManagerNodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IRewardManagerNodeType, 0x30);
} // namespace quest
using questIRewardManagerNodeType = quest::IRewardManagerNodeType;
} // namespace RED4ext

// clang-format on
