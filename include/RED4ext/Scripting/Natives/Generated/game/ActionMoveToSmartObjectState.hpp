#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionMoveToState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectInstanceEntryType.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct __declspec(align(0x10)) ActionMoveToSmartObjectState : game::ActionMoveToState
{
    static constexpr const char* NAME = "gameActionMoveToSmartObjectState";
    static constexpr const char* ALIAS = NAME;

    uint64_t targetHash; // 40
    bool usePathfinding; // 48
    bool useStart; // 49
    bool useStop; // 4A
    uint8_t unk4B[0x4C - 0x4B]; // 4B
    game::SmartObjectInstanceEntryType entryType; // 4C
    move::MovementType movementType; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    WeakHandle<game::Object> strafingTarget; // 58
    Vector3 entryDirection; // 68
    Vector3 entryPointPos; // 74
    Vector4 entryPointDir; // 80
    CName animationName; // 90
    bool isInSmartObject; // 98
    uint8_t unk99[0xA0 - 0x99]; // 99
};
RED4EXT_ASSERT_SIZE(ActionMoveToSmartObjectState, 0xA0);
} // namespace game
using gameActionMoveToSmartObjectState = game::ActionMoveToSmartObjectState;
} // namespace RED4ext

// clang-format on
