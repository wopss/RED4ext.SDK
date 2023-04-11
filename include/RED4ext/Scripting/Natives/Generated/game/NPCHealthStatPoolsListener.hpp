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
struct NPCHealthStatPoolsListener : game::PuppetStatPoolsListener
{
    static constexpr const char* NAME = "gameNPCHealthStatPoolsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(NPCHealthStatPoolsListener, 0x50);
} // namespace game
using gameNPCHealthStatPoolsListener = game::NPCHealthStatPoolsListener;
} // namespace RED4ext

// clang-format on
