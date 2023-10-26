#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct __declspec(align(0x10)) TickEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileTickEvent";
    static constexpr const char* ALIAS = NAME;

    float deltaTime; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
    Vector4 position; // 50
};
RED4EXT_ASSERT_SIZE(TickEvent, 0x60);
} // namespace game::projectile
using gameprojectileTickEvent = game::projectile::TickEvent;
} // namespace RED4ext

// clang-format on
