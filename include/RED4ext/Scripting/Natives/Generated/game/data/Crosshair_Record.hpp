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
struct Crosshair_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataCrosshair_Record";
    static constexpr const char* ALIAS = "Crosshair_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Crosshair_Record, 0x58);
} // namespace game::data
using gamedataCrosshair_Record = game::data::Crosshair_Record;
using Crosshair_Record = game::data::Crosshair_Record;
} // namespace RED4ext

// clang-format on
