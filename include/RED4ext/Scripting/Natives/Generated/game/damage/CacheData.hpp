#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::damage { 
struct CacheData : IScriptable
{
    static constexpr const char* NAME = "gamedamageCacheData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CacheData, 0x40);
} // namespace game::damage
} // namespace RED4ext
