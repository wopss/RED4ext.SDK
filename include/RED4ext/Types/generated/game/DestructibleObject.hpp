#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct DestructibleObject : game::Object
{
    static constexpr const char* NAME = "gameDestructibleObject";
    static constexpr const char* ALIAS = NAME;

    TweakDBID recordID; // 230
};
RED4EXT_ASSERT_SIZE(DestructibleObject, 0x238);
} // namespace game
} // namespace RED4ext
