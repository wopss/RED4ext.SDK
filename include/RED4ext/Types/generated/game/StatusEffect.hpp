#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>
#include <RED4ext/Types/generated/ent/EntityID.hpp>
#include <RED4ext/Types/generated/game/SourceData.hpp>
#include <RED4ext/Types/generated/game/StatusEffectBase.hpp>

namespace RED4ext
{
namespace game { struct StatModifierData; }

namespace game { 
struct StatusEffect : game::StatusEffectBase
{
    static constexpr const char* NAME = "gameStatusEffect";
    static constexpr const char* ALIAS = "StatusEffect";

    DynArray<Handle<game::StatModifierData>> durationModifiers; // 48
    DynArray<Handle<game::StatModifierData>> stackModifiers; // 58
    DynArray<Handle<game::StatModifierData>> removeAllStacksWhenDurationEndsModifiers; // 68
    uint32_t maxStacks; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    DynArray<game::SourceData> sourcesData; // 80
    uint32_t durationID; // 90
    float duration; // 94
    float remainingDuration; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
    ent::EntityID ownerEntityID; // A0
    float initialApplicationTimestamp; // A8
    float lastApplicationTimestamp; // AC
    ent::EntityID instigatorEntityID; // B0
    TweakDBID instigatorRecordID; // B8
    Vector4 direction; // C0
    bool removeAllStacksWhenDurationEnds; // D0
    uint8_t unkD1[0xD8 - 0xD1]; // D1
    CName applicationSource; // D8
};
RED4EXT_ASSERT_SIZE(StatusEffect, 0xE0);
} // namespace game
using StatusEffect = game::StatusEffect;
} // namespace RED4ext
