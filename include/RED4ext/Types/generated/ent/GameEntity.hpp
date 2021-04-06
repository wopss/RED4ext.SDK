#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ent/Entity.hpp>

namespace RED4ext
{
namespace ent { 
struct GameEntity : ent::Entity
{
    static constexpr const char* NAME = "entGameEntity";
    static constexpr const char* ALIAS = "GameEntity";

};
RED4EXT_ASSERT_SIZE(GameEntity, 0x158);
} // namespace ent
using GameEntity = ent::GameEntity;
} // namespace RED4ext
