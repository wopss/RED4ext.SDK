#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::bb { 
struct AllScriptDefinitions : IScriptable
{
    static constexpr const char* NAME = "gamebbAllScriptDefinitions";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AllScriptDefinitions, 0x40);
} // namespace game::bb
} // namespace RED4ext
