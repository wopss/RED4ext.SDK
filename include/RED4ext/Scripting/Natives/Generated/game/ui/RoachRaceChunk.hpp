#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/RoachRaceObstacle.hpp>

namespace RED4ext
{
namespace game::ui { 
struct RoachRaceChunk
{
    static constexpr const char* NAME = "gameuiRoachRaceChunk";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::RoachRaceObstacle> obstacles; // 00
};
RED4EXT_ASSERT_SIZE(RoachRaceChunk, 0x10);
} // namespace game::ui
} // namespace RED4ext
