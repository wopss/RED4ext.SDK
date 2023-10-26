#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/BumpLocation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/BumpSide.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct __declspec(align(0x10)) BumpEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsBumpEvent";
    static constexpr const char* ALIAS = "BumpEvent";

    game::interactions::BumpSide side; // 40
    game::interactions::BumpLocation sourceLocation; // 44
    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 direction; // 50
    Vector4 sourcePosition; // 60
    float sourceSquaredDistance; // 70
    float sourceSpeed; // 74
    float sourceRadius; // 78
    bool isMounted; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
    ent::EntityID vehicleEntityID; // 80
    uint8_t unk88[0x90 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(BumpEvent, 0x90);
} // namespace game::interactions
using gameinteractionsBumpEvent = game::interactions::BumpEvent;
using BumpEvent = game::interactions::BumpEvent;
} // namespace RED4ext

// clang-format on
