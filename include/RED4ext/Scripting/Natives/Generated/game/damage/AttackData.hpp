#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AttackType.hpp>

namespace RED4ext
{
namespace game { struct IAttack; }
namespace game { struct Object; }
namespace game::weapon { struct Object; }

namespace game::damage { 
struct AttackData : IScriptable
{
    static constexpr const char* NAME = "gamedamageAttackData";
    static constexpr const char* ALIAS = "AttackData";

    game::data::AttackType attackType; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    WeakHandle<game::Object> instigator; // 48
    WeakHandle<game::Object> source; // 58
    WeakHandle<game::weapon::Object> weapon; // 68
    Handle<game::IAttack> attackDefinition; // 78
    uint8_t unk88[0x90 - 0x88]; // 88
    Vector4 attackPosition; // 90
    float weaponCharge; // A0
    int32_t numRicochetBounces; // A4
    float attackTime; // A8
    uint8_t unkAC[0xC0 - 0xAC]; // AC
};
RED4EXT_ASSERT_SIZE(AttackData, 0xC0);
} // namespace game::damage
using AttackData = game::damage::AttackData;
} // namespace RED4ext
