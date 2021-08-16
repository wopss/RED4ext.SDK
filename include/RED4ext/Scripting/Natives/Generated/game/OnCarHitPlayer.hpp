#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct OnCarHitPlayer : red::Event
{
    static constexpr const char* NAME = "gameOnCarHitPlayer";
    static constexpr const char* ALIAS = "OnCarHitPlayer";

    Vector4 hitDirection; // 40
    ent::EntityID carId; // 50
    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(OnCarHitPlayer, 0x60);
} // namespace game
using OnCarHitPlayer = game::OnCarHitPlayer;
} // namespace RED4ext
