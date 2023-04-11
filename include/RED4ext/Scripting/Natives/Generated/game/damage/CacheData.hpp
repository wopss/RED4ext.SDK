#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::damage
{
struct CacheData : IScriptable
{
    static constexpr const char* NAME = "gamedamageCacheData";
    static constexpr const char* ALIAS = "CacheData";

};
RED4EXT_ASSERT_SIZE(CacheData, 0x40);
} // namespace game::damage
using gamedamageCacheData = game::damage::CacheData;
using CacheData = game::damage::CacheData;
} // namespace RED4ext

// clang-format on
