#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class EntityReferenceType : int8_t
{
    EntityRef = 0,
    Tag = 1,
    SlotID = 2,
    SceneActorContextName = 3,
};
} // namespace game
using gameEntityReferenceType = game::EntityReferenceType;
} // namespace RED4ext

// clang-format on
