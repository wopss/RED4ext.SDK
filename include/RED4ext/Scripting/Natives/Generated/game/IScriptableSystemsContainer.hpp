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
struct IScriptableSystemsContainer : game::IGameSystem
{
    static constexpr const char* NAME = "gameIScriptableSystemsContainer";
    static constexpr const char* ALIAS = "IScriptableSystemsContainer";

};
RED4EXT_ASSERT_SIZE(IScriptableSystemsContainer, 0x48);
} // namespace game
using gameIScriptableSystemsContainer = game::IScriptableSystemsContainer;
using IScriptableSystemsContainer = game::IScriptableSystemsContainer;
} // namespace RED4ext

// clang-format on
