#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct GOGRewardsScriptListener : IScriptable
{
    static constexpr const char* NAME = "gameGOGRewardsScriptListener";
    static constexpr const char* ALIAS = "GOGRewardsScriptListener";

};
RED4EXT_ASSERT_SIZE(GOGRewardsScriptListener, 0x40);
} // namespace game
using GOGRewardsScriptListener = game::GOGRewardsScriptListener;
} // namespace RED4ext
