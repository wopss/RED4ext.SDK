#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ArcadeGameplay_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct TankGameplay_Record : game::data::ArcadeGameplay_Record
{
    static constexpr const char* NAME = "gamedataTankGameplay_Record";
    static constexpr const char* ALIAS = "TankGameplay_Record";

    uint8_t unk60[0xA8 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(TankGameplay_Record, 0xA8);
} // namespace game::data
using gamedataTankGameplay_Record = game::data::TankGameplay_Record;
using TankGameplay_Record = game::data::TankGameplay_Record;
} // namespace RED4ext

// clang-format on
