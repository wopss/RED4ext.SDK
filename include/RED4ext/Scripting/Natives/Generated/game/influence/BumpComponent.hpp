#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/influence/BumpReactionSetting.hpp>

namespace RED4ext
{
namespace game::influence { 
struct BumpComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameinfluenceBumpComponent";
    static constexpr const char* ALIAS = "BumpComponent";

    uint8_t unk120[0x3D0 - 0x120]; // 120
    bool autoPlayBumpAnimation; // 3D0
    bool isPlayerControlled; // 3D1
    uint8_t unk3D2[0x3D4 - 0x3D2]; // 3D2
    float movementSpreadDistance; // 3D4
    float movementSpreadRadius; // 3D8
    float distanceToReactBack; // 3DC
    float distanceToReactFront; // 3E0
    uint8_t unk3E4[0x3E8 - 0x3E4]; // 3E4
    DynArray<game::influence::BumpReactionSetting> reactionSettings; // 3E8
    uint8_t unk3F8[0x400 - 0x3F8]; // 3F8
};
RED4EXT_ASSERT_SIZE(BumpComponent, 0x400);
} // namespace game::influence
using BumpComponent = game::influence::BumpComponent;
} // namespace RED4ext
