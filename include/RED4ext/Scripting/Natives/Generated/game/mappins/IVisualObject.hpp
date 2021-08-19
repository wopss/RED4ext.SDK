#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::mappins { 
struct IVisualObject : IScriptable
{
    static constexpr const char* NAME = "gamemappinsIVisualObject";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IVisualObject, 0x40);
} // namespace game::mappins
} // namespace RED4ext
