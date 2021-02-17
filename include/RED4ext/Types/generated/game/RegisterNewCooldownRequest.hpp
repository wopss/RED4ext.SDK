#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game { 
struct RegisterNewCooldownRequest
{
    static constexpr const char* NAME = "gameRegisterNewCooldownRequest";
    static constexpr const char* ALIAS = "RegisterNewCooldownRequest";

    WeakHandle<ent::Entity> owner; // 00
    ItemID ownerItemId; // 10
    TweakDBID ownerRecord; // 20
    CName cooldownName; // 28
    float duration; // 30
    game::data::StatType type; // 34
    bool modifiable; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(RegisterNewCooldownRequest, 0x40);
} // namespace game
using RegisterNewCooldownRequest = game::RegisterNewCooldownRequest;
} // namespace RED4ext
