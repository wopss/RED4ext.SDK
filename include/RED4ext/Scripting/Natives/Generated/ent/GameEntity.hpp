#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/Entity.hpp>

namespace RED4ext
{
namespace ent
{
struct GameEntity : ent::Entity
{
    static constexpr const char* NAME = "entGameEntity";
    static constexpr const char* ALIAS = "GameEntity";

};
RED4EXT_ASSERT_SIZE(GameEntity, 0x160);
} // namespace ent
using entGameEntity = ent::GameEntity;
using GameEntity = ent::GameEntity;
} // namespace RED4ext

// clang-format on
