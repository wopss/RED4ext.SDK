#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/influence/BumpReactionSetting.hpp>

namespace RED4ext
{
namespace game::influence
{
struct __declspec(align(0x10)) BumpComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameinfluenceBumpComponent";
    static constexpr const char* ALIAS = "BumpComponent";

    uint8_t unk120[0x3F0 - 0x120]; // 120
    bool autoPlayBumpAnimation; // 3F0
    bool isPlayerControlled; // 3F1
    uint8_t unk3F2[0x3F4 - 0x3F2]; // 3F2
    float movementSpreadDistance; // 3F4
    float movementSpreadRadius; // 3F8
    float distanceToReactBack; // 3FC
    float distanceToReactFront; // 400
    uint8_t unk404[0x408 - 0x404]; // 404
    DynArray<game::influence::BumpReactionSetting> reactionSettings; // 408
    uint8_t unk418[0x420 - 0x418]; // 418
};
RED4EXT_ASSERT_SIZE(BumpComponent, 0x420);
} // namespace game::influence
using gameinfluenceBumpComponent = game::influence::BumpComponent;
using BumpComponent = game::influence::BumpComponent;
} // namespace RED4ext

// clang-format on
