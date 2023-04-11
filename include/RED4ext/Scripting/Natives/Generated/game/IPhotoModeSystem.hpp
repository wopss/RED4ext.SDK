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
struct IPhotoModeSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIPhotoModeSystem";
    static constexpr const char* ALIAS = "IPhotoModeSystem";

};
RED4EXT_ASSERT_SIZE(IPhotoModeSystem, 0x48);
} // namespace game
using gameIPhotoModeSystem = game::IPhotoModeSystem;
using IPhotoModeSystem = game::IPhotoModeSystem;
} // namespace RED4ext

// clang-format on
