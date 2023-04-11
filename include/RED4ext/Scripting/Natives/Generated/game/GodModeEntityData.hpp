#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/GodModeData.hpp>

namespace RED4ext
{
namespace game
{
struct GodModeEntityData
{
    static constexpr const char* NAME = "gameGodModeEntityData";
    static constexpr const char* ALIAS = "GodModeEntityData";

    DynArray<game::GodModeData> overrides; // 00
    DynArray<game::GodModeData> base; // 10
};
RED4EXT_ASSERT_SIZE(GodModeEntityData, 0x20);
} // namespace game
using gameGodModeEntityData = game::GodModeEntityData;
using GodModeEntityData = game::GodModeEntityData;
} // namespace RED4ext

// clang-format on
