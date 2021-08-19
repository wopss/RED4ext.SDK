#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/RoachRaceChunk.hpp>

namespace RED4ext
{
namespace game::ui { 
struct RoachRaceChunkLayer
{
    static constexpr const char* NAME = "gameuiRoachRaceChunkLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    DynArray<game::ui::RoachRaceChunk> chunks; // 10
};
RED4EXT_ASSERT_SIZE(RoachRaceChunkLayer, 0x20);
} // namespace game::ui
} // namespace RED4ext
