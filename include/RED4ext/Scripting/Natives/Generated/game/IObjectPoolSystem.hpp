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
struct IObjectPoolSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIObjectPoolSystem";
    static constexpr const char* ALIAS = "IObjectPoolSystem";

};
RED4EXT_ASSERT_SIZE(IObjectPoolSystem, 0x48);
} // namespace game
using gameIObjectPoolSystem = game::IObjectPoolSystem;
using IObjectPoolSystem = game::IObjectPoolSystem;
} // namespace RED4ext

// clang-format on
