#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) OnCarHitPlayer : red::Event
{
    static constexpr const char* NAME = "gameOnCarHitPlayer";
    static constexpr const char* ALIAS = "OnCarHitPlayer";

    Vector4 hitDirection; // 40
    Vector4 seperationImpulse; // 50
    ent::EntityID carId; // 60
    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(OnCarHitPlayer, 0x70);
} // namespace game
using gameOnCarHitPlayer = game::OnCarHitPlayer;
using OnCarHitPlayer = game::OnCarHitPlayer;
} // namespace RED4ext

// clang-format on
