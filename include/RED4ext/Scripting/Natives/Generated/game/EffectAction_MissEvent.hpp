#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectAction.hpp>

namespace RED4ext
{
namespace game
{
struct EffectAction_MissEvent : game::EffectAction
{
    static constexpr const char* NAME = "gameEffectAction_MissEvent";
    static constexpr const char* ALIAS = NAME;

    bool npcMissEvents; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(EffectAction_MissEvent, 0x48);
} // namespace game
using gameEffectAction_MissEvent = game::EffectAction_MissEvent;
} // namespace RED4ext

// clang-format on
