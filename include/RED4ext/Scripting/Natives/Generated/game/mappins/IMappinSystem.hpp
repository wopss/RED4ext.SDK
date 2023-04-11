#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IReplicatedGameSystem.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct IMappinSystem : game::IReplicatedGameSystem
{
    static constexpr const char* NAME = "gamemappinsIMappinSystem";
    static constexpr const char* ALIAS = "IMappinSystem";

};
RED4EXT_ASSERT_SIZE(IMappinSystem, 0x58);
} // namespace game::mappins
using gamemappinsIMappinSystem = game::mappins::IMappinSystem;
using IMappinSystem = game::mappins::IMappinSystem;
} // namespace RED4ext

// clang-format on
