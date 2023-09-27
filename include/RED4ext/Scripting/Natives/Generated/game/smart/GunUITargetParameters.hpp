#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/smart/GunTargetState.hpp>

namespace RED4ext
{
namespace game::smart
{
struct GunUITargetParameters
{
    static constexpr const char* NAME = "gamesmartGunUITargetParameters";
    static constexpr const char* ALIAS = "smartGunUITargetParameters";

    Vector2 pos; // 00
    game::smart::GunTargetState state; // 08
    float distance; // 0C
    float accuracy; // 10
    bool isLocked; // 14
    uint8_t unk15[0x18 - 0x15]; // 15
    float timeLocking; // 18
    float timeUnlocking; // 1C
    ent::EntityID entityID; // 20
    CName attachedBoneName; // 28
};
RED4EXT_ASSERT_SIZE(GunUITargetParameters, 0x30);
} // namespace game::smart
using gamesmartGunUITargetParameters = game::smart::GunUITargetParameters;
using smartGunUITargetParameters = game::smart::GunUITargetParameters;
} // namespace RED4ext

// clang-format on
