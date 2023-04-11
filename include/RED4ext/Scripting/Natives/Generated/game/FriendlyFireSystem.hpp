#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IFriendlyFireSystem.hpp>

namespace RED4ext
{
namespace game
{
struct FriendlyFireSystem : game::IFriendlyFireSystem
{
    static constexpr const char* NAME = "gameFriendlyFireSystem";
    static constexpr const char* ALIAS = "FriendlyFireSystem";

    uint8_t unk48[0x160 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(FriendlyFireSystem, 0x160);
} // namespace game
using gameFriendlyFireSystem = game::FriendlyFireSystem;
using FriendlyFireSystem = game::FriendlyFireSystem;
} // namespace RED4ext

// clang-format on
