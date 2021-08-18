#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>

namespace RED4ext
{
namespace game { 
struct IScriptablePrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameIScriptablePrereq";
    static constexpr const char* ALIAS = "IScriptablePrereq";

};
RED4EXT_ASSERT_SIZE(IScriptablePrereq, 0x40);
} // namespace game
using IScriptablePrereq = game::IScriptablePrereq;
} // namespace RED4ext
