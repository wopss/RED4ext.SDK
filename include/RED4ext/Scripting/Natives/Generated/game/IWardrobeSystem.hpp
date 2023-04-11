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
struct IWardrobeSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIWardrobeSystem";
    static constexpr const char* ALIAS = "IWardrobeSystem";

};
RED4EXT_ASSERT_SIZE(IWardrobeSystem, 0x48);
} // namespace game
using gameIWardrobeSystem = game::IWardrobeSystem;
using IWardrobeSystem = game::IWardrobeSystem;
} // namespace RED4ext

// clang-format on
