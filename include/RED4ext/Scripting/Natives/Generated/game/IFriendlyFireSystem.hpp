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
struct IFriendlyFireSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIFriendlyFireSystem";
    static constexpr const char* ALIAS = "IFriendlyFireSystem";

};
RED4EXT_ASSERT_SIZE(IFriendlyFireSystem, 0x48);
} // namespace game
using gameIFriendlyFireSystem = game::IFriendlyFireSystem;
using IFriendlyFireSystem = game::IFriendlyFireSystem;
} // namespace RED4ext

// clang-format on
