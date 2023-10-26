#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SourceData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatusEffectBase.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) StatusEffect : game::StatusEffectBase
{
    static constexpr const char* NAME = "gameStatusEffect";
    static constexpr const char* ALIAS = "StatusEffect";

    uint8_t unk48[0x78 - 0x48]; // 48
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
    ent::EntityID proxyEntityID; // C0
    uint8_t unkC8[0xD0 - 0xC8]; // C8
    Vector4 direction; // D0
    bool removeAllStacksWhenDurationEnds; // E0
    uint8_t unkE1[0xE8 - 0xE1]; // E1
    CName applicationSource; // E8
};
RED4EXT_ASSERT_SIZE(StatusEffect, 0xF0);
} // namespace game
using gameStatusEffect = game::StatusEffect;
using StatusEffect = game::StatusEffect;
} // namespace RED4ext

// clang-format on
