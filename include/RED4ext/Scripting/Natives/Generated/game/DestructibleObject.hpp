#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct DestructibleObject : game::Object
{
    static constexpr const char* NAME = "gameDestructibleObject";
    static constexpr const char* ALIAS = NAME;

    TweakDBID recordID; // 240
};
RED4EXT_ASSERT_SIZE(DestructibleObject, 0x248);
} // namespace game
using gameDestructibleObject = game::DestructibleObject;
} // namespace RED4ext

// clang-format on
