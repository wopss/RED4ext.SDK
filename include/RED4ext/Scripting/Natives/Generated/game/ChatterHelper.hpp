#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct ChatterHelper : IScriptable
{
    static constexpr const char* NAME = "gameChatterHelper";
    static constexpr const char* ALIAS = "ChatterHelper";

};
RED4EXT_ASSERT_SIZE(ChatterHelper, 0x40);
} // namespace game
using ChatterHelper = game::ChatterHelper;
} // namespace RED4ext
