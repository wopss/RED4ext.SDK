#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IContainerManager : game::IGameSystem
{
    static constexpr const char* NAME = "gameIContainerManager";
    static constexpr const char* ALIAS = "IContainerManager";

};
RED4EXT_ASSERT_SIZE(IContainerManager, 0x48);
} // namespace game
using gameIContainerManager = game::IContainerManager;
using IContainerManager = game::IContainerManager;
} // namespace RED4ext

// clang-format on
