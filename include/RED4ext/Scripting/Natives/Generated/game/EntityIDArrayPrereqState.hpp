#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game
{
struct EntityIDArrayPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameEntityIDArrayPrereqState";
    static constexpr const char* ALIAS = "EntityIDArrayPrereqState";

    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(EntityIDArrayPrereqState, 0xD0);
} // namespace game
using gameEntityIDArrayPrereqState = game::EntityIDArrayPrereqState;
using EntityIDArrayPrereqState = game::EntityIDArrayPrereqState;
} // namespace RED4ext

// clang-format on
