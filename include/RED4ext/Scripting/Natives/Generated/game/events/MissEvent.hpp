#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct AttackComputed; }
namespace game::damage { struct AttackData; }

namespace game::events
{
struct __declspec(align(0x10)) MissEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsMissEvent";
    static constexpr const char* ALIAS = "gameMissEvent";

    Handle<game::damage::AttackData> attackData; // 40
    Vector4 hitPosition; // 50
    Vector4 hitDirection; // 60
    uint8_t unk70[0x88 - 0x70]; // 70
    float attackPentration; // 88
    bool hasPiercedTechSurface; // 8C
    uint8_t unk8D[0x90 - 0x8D]; // 8D
    Handle<game::AttackComputed> attackComputed; // 90
};
RED4EXT_ASSERT_SIZE(MissEvent, 0xA0);
} // namespace game::events
using gameeventsMissEvent = game::events::MissEvent;
using gameMissEvent = game::events::MissEvent;
} // namespace RED4ext

// clang-format on
