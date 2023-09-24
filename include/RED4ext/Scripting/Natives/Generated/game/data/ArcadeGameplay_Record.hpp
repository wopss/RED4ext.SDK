#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct ArcadeGameplay_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataArcadeGameplay_Record";
    static constexpr const char* ALIAS = "ArcadeGameplay_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ArcadeGameplay_Record, 0x60);
} // namespace game::data
using gamedataArcadeGameplay_Record = game::data::ArcadeGameplay_Record;
using ArcadeGameplay_Record = game::data::ArcadeGameplay_Record;
} // namespace RED4ext

// clang-format on
