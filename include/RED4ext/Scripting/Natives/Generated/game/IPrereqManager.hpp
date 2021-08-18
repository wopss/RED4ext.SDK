#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IPrereqManager : game::IGameSystem
{
    static constexpr const char* NAME = "gameIPrereqManager";
    static constexpr const char* ALIAS = "IPrereqManager";

};
RED4EXT_ASSERT_SIZE(IPrereqManager, 0x48);
} // namespace game
using IPrereqManager = game::IPrereqManager;
} // namespace RED4ext
