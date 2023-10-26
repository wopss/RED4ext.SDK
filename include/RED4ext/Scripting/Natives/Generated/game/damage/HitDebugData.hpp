#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AttackDebugData.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace game::damage { struct DamageDebugData; }

namespace game::damage
{
struct __declspec(align(0x10)) HitDebugData : IScriptable
{
    static constexpr const char* NAME = "gamedamageHitDebugData";
    static constexpr const char* ALIAS = "HitDebugData";

    Vector4 sourceHitPosition; // 40
    Vector4 targetHitPosition; // 50
    uint8_t unk60[0x64 - 0x60]; // 60
    float attackTime; // 64
    WeakHandle<game::Object> instigator; // 68
    WeakHandle<game::Object> source; // 78
    WeakHandle<game::Object> target; // 88
    CName instigatorName; // 98
    CName sourceName; // A0
    CName targetName; // A8
    game::AttackDebugData sourceAttackDebugData; // B0
    CName sourceWeaponName; // F0
    CName sourceAttackName; // F8
    DynArray<Handle<game::damage::DamageDebugData>> calculatedDamages; // 100
    DynArray<Handle<game::damage::DamageDebugData>> appliedDamages; // 110
    CName hitType; // 120
    CName hitFlags; // 128
};
RED4EXT_ASSERT_SIZE(HitDebugData, 0x130);
} // namespace game::damage
using gamedamageHitDebugData = game::damage::HitDebugData;
using HitDebugData = game::damage::HitDebugData;
} // namespace RED4ext

// clang-format on
