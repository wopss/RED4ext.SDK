#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world { 
struct PrefabMetadata : IScriptable
{
    static constexpr const char* NAME = "worldPrefabMetadata";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PrefabMetadata, 0x40);
} // namespace world
} // namespace RED4ext
