#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AttackType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events { 
struct HitEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsHitEvent";
    static constexpr const char* ALIAS = NAME;

    game::data::AttackType attackType; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
    Vector4 hitPosition; // 50
    CName physicsMaterial; // 60
    float damage; // 68
    bool isTargetPuppet; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
    CName targetPuppetMeleeMaterial; // 70
    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(HitEvent, 0x80);
} // namespace game::audio::events
} // namespace RED4ext
