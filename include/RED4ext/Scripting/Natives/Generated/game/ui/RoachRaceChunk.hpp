#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/RoachRaceObstacle.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RoachRaceChunk
{
    static constexpr const char* NAME = "gameuiRoachRaceChunk";
    static constexpr const char* ALIAS = "RoachRaceChunk";

    DynArray<game::ui::RoachRaceObstacle> obstacles; // 00
};
RED4EXT_ASSERT_SIZE(RoachRaceChunk, 0x10);
} // namespace game::ui
using gameuiRoachRaceChunk = game::ui::RoachRaceChunk;
using RoachRaceChunk = game::ui::RoachRaceChunk;
} // namespace RED4ext

// clang-format on
