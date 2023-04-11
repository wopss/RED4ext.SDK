#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game
{
struct RegisterNewAbilityCooldownRequest
{
    static constexpr const char* NAME = "gameRegisterNewAbilityCooldownRequest";
    static constexpr const char* ALIAS = "RegisterNewAbilityCooldownRequest";

    WeakHandle<ent::Entity> owner; // 00
    ItemID ownerItemId; // 10
    TweakDBID ownerRecord; // 20
    CName cooldownName; // 28
    float duration; // 30
    game::data::StatType type; // 34
    bool modifiable; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    game::data::StatType abilityType; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(RegisterNewAbilityCooldownRequest, 0x48);
} // namespace game
using gameRegisterNewAbilityCooldownRequest = game::RegisterNewAbilityCooldownRequest;
using RegisterNewAbilityCooldownRequest = game::RegisterNewAbilityCooldownRequest;
} // namespace RED4ext

// clang-format on
