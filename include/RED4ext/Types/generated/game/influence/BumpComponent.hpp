#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Types/generated/game/influence/BumpReactionSetting.hpp>

namespace RED4ext
{
namespace game::influence { 
struct BumpComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameinfluenceBumpComponent";
    static constexpr const char* ALIAS = "BumpComponent";

    uint8_t unk120[0x3C0 - 0x120]; // 120
    bool autoPlayBumpAnimation; // 3C0
    bool isPlayerControlled; // 3C1
    uint8_t unk3C2[0x3C4 - 0x3C2]; // 3C2
    float movementSpreadDistance; // 3C4
    float movementSpreadRadius; // 3C8
    float distanceToReactBack; // 3CC
    float distanceToReactFront; // 3D0
    uint8_t unk3D4[0x3D8 - 0x3D4]; // 3D4
    DynArray<game::influence::BumpReactionSetting> reactionSettings; // 3D8
    uint8_t unk3E8[0x3F0 - 0x3E8]; // 3E8
};
RED4EXT_ASSERT_SIZE(BumpComponent, 0x3F0);
} // namespace game::influence
using BumpComponent = game::influence::BumpComponent;
} // namespace RED4ext
