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
struct IDynamicSpawnSystemType : ISerializable
{
    static constexpr const char* NAME = "questIDynamicSpawnSystemType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IDynamicSpawnSystemType, 0x30);
} // namespace quest
using questIDynamicSpawnSystemType = quest::IDynamicSpawnSystemType;
} // namespace RED4ext

// clang-format on
