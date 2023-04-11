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
struct IOnlineSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIOnlineSystem";
    static constexpr const char* ALIAS = "IOnlineSystem";

};
RED4EXT_ASSERT_SIZE(IOnlineSystem, 0x48);
} // namespace game
using gameIOnlineSystem = game::IOnlineSystem;
using IOnlineSystem = game::IOnlineSystem;
} // namespace RED4ext

// clang-format on
