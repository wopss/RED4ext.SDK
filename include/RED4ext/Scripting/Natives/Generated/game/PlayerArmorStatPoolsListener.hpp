#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PuppetStatPoolsListener.hpp>

namespace RED4ext
{
namespace game
{
struct PlayerArmorStatPoolsListener : game::PuppetStatPoolsListener
{
    static constexpr const char* NAME = "gamePlayerArmorStatPoolsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PlayerArmorStatPoolsListener, 0x50);
} // namespace game
using gamePlayerArmorStatPoolsListener = game::PlayerArmorStatPoolsListener;
} // namespace RED4ext

// clang-format on
