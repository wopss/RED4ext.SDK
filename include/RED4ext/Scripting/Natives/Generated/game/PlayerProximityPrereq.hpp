#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>

namespace RED4ext
{
namespace game
{
struct PlayerProximityPrereq : game::IPrereq
{
    static constexpr const char* NAME = "gamePlayerProximityPrereq";
    static constexpr const char* ALIAS = "PlayerProximityPrereq";

    float squaredRange; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(PlayerProximityPrereq, 0x48);
} // namespace game
using gamePlayerProximityPrereq = game::PlayerProximityPrereq;
using PlayerProximityPrereq = game::PlayerProximityPrereq;
} // namespace RED4ext

// clang-format on
