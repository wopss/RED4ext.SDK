#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/PingType.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace game { struct Object; }

namespace game
{
struct __declspec(align(0x10)) PingEntry
{
    static constexpr const char* NAME = "gamePingEntry";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    Vector4 worldPosition; // 10
    WeakHandle<ent::Entity> hitObject; // 20
    uint8_t unk30[0x40 - 0x30]; // 30
    net::Time time; // 40
    uint8_t unk48[0x50 - 0x48]; // 48
    game::data::PingType pingType; // 50
    uint8_t unk54[0x68 - 0x54]; // 54
    WeakHandle<game::Object> owner; // 68
    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(PingEntry, 0x80);
} // namespace game
using gamePingEntry = game::PingEntry;
} // namespace RED4ext

// clang-format on
