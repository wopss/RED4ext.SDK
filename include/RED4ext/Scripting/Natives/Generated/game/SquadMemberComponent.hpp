#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace game
{
struct SquadMemberComponent : game::Component
{
    static constexpr const char* NAME = "gameSquadMemberComponent";
    static constexpr const char* ALIAS = "SquadMemberComponent";

    uint8_t unkA8[0x168 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(SquadMemberComponent, 0x168);
} // namespace game
using gameSquadMemberComponent = game::SquadMemberComponent;
using SquadMemberComponent = game::SquadMemberComponent;
} // namespace RED4ext

// clang-format on
