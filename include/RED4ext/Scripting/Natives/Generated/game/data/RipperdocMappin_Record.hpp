#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/UIIcon_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct RipperdocMappin_Record : game::data::UIIcon_Record
{
    static constexpr const char* NAME = "gamedataRipperdocMappin_Record";
    static constexpr const char* ALIAS = "RipperdocMappin_Record";

    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(RipperdocMappin_Record, 0x70);
} // namespace game::data
using gamedataRipperdocMappin_Record = game::data::RipperdocMappin_Record;
using RipperdocMappin_Record = game::data::RipperdocMappin_Record;
} // namespace RED4ext

// clang-format on
