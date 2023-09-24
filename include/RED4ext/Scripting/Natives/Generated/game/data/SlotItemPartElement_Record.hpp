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
struct SlotItemPartElement_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataSlotItemPartElement_Record";
    static constexpr const char* ALIAS = "SlotItemPartElement_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SlotItemPartElement_Record, 0x60);
} // namespace game::data
using gamedataSlotItemPartElement_Record = game::data::SlotItemPartElement_Record;
using SlotItemPartElement_Record = game::data::SlotItemPartElement_Record;
} // namespace RED4ext

// clang-format on
