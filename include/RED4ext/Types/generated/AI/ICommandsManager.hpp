#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI { 
struct ICommandsManager : game::IGameSystem
{
    static constexpr const char* NAME = "AIICommandsManager";
    static constexpr const char* ALIAS = "ICommandsManager";

};
RED4EXT_ASSERT_SIZE(ICommandsManager, 0x48);
} // namespace AI
using ICommandsManager = AI::ICommandsManager;
} // namespace RED4ext
