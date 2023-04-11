#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SquadMemberDataEntry.hpp>

namespace RED4ext
{
namespace game
{
struct SquadMemberComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "gameSquadMemberComponentPS";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::SquadMemberDataEntry> entries; // 68
};
RED4EXT_ASSERT_SIZE(SquadMemberComponentPS, 0x78);
} // namespace game
using gameSquadMemberComponentPS = game::SquadMemberComponentPS;
} // namespace RED4ext

// clang-format on
