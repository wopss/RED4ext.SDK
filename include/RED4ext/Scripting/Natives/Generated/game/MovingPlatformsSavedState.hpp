#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MovingPlatformSavedData.hpp>

namespace RED4ext
{
namespace game
{
struct MovingPlatformsSavedState : ISerializable
{
    static constexpr const char* NAME = "gameMovingPlatformsSavedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::EntityID> mapping; // 30
    DynArray<game::MovingPlatformSavedData> data; // 40
};
RED4EXT_ASSERT_SIZE(MovingPlatformsSavedState, 0x50);
} // namespace game
using gameMovingPlatformsSavedState = game::MovingPlatformsSavedState;
} // namespace RED4ext

// clang-format on
