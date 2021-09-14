#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IDeviceInteractionManager : game::IGameSystem
{
    static constexpr const char* NAME = "gameIDeviceInteractionManager";
    static constexpr const char* ALIAS = "IDeviceInteractionManager";

};
RED4EXT_ASSERT_SIZE(IDeviceInteractionManager, 0x48);
} // namespace game
using IDeviceInteractionManager = game::IDeviceInteractionManager;
} // namespace RED4ext
