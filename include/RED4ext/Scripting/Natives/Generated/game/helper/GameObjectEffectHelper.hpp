#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::helper { 
struct GameObjectEffectHelper : IScriptable
{
    static constexpr const char* NAME = "gamehelperGameObjectEffectHelper";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(GameObjectEffectHelper, 0x40);
} // namespace game::helper
} // namespace RED4ext
