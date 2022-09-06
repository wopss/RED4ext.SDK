#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPhotoModeSystem.hpp>

namespace RED4ext
{
namespace game { 
struct PhotoModeSystem : game::IPhotoModeSystem
{
    static constexpr const char* NAME = "gamePhotoModeSystem";
    static constexpr const char* ALIAS = "PhotoModeSystem";

    uint8_t unk48[0x730 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PhotoModeSystem, 0x730);
} // namespace game
using PhotoModeSystem = game::PhotoModeSystem;
} // namespace RED4ext

// clang-format on
