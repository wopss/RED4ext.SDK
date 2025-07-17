#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPhotoModeSystem.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) PhotoModeSystem : game::IPhotoModeSystem
{
    static constexpr const char* NAME = "gamePhotoModeSystem";
    static constexpr const char* ALIAS = "PhotoModeSystem";

    uint8_t unk48[0xBA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PhotoModeSystem, 0xBA0);
} // namespace game
using gamePhotoModeSystem = game::PhotoModeSystem;
using PhotoModeSystem = game::PhotoModeSystem;
} // namespace RED4ext

// clang-format on
