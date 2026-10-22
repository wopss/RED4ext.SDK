#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
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

    uint8_t unk120[0x430 - 0x120]; // 120
    bool autoPlayBumpAnimation; // 430
    bool isPlayerControlled; // 431
    uint8_t unk432[0x434 - 0x432]; // 432
    float movementSpreadDistance; // 434
    float movementSpreadRadius; // 438
    float distanceToReactBack; // 43C
    float distanceToReactFront; // 440
    uint8_t unk444[0x448 - 0x444]; // 444
    DynArray<game::influence::BumpReactionSetting> reactionSettings; // 448
    uint8_t unk458[0x460 - 0x458]; // 458
};
RED4EXT_ASSERT_SIZE(BumpComponent, 0x460);
} // namespace game::influence
using gameinfluenceBumpComponent = game::influence::BumpComponent;
using BumpComponent = game::influence::BumpComponent;
} // namespace RED4ext

// clang-format on
