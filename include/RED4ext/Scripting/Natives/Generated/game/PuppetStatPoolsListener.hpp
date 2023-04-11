#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatPoolsListener.hpp>

namespace RED4ext
{
namespace game
{
struct PuppetStatPoolsListener : game::IStatPoolsListener
{
    static constexpr const char* NAME = "gamePuppetStatPoolsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PuppetStatPoolsListener, 0x48);
} // namespace game
using gamePuppetStatPoolsListener = game::PuppetStatPoolsListener;
} // namespace RED4ext

// clang-format on
