#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/PoolValueModifier_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct MutablePoolValueModifier_Record : game::data::PoolValueModifier_Record
{
    static constexpr const char* NAME = "gamedataMutablePoolValueModifier_Record";
    static constexpr const char* ALIAS = "MutablePoolValueModifier_Record";

    uint8_t unk60[0x78 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(MutablePoolValueModifier_Record, 0x78);
} // namespace game::data
using MutablePoolValueModifier_Record = game::data::MutablePoolValueModifier_Record;
} // namespace RED4ext
