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
struct GlamdocMappin_Record : game::data::UIIcon_Record
{
    static constexpr const char* NAME = "gamedataGlamdocMappin_Record";
    static constexpr const char* ALIAS = "GlamdocMappin_Record";

    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(GlamdocMappin_Record, 0x70);
} // namespace game::data
using gamedataGlamdocMappin_Record = game::data::GlamdocMappin_Record;
using GlamdocMappin_Record = game::data::GlamdocMappin_Record;
} // namespace RED4ext

// clang-format on
