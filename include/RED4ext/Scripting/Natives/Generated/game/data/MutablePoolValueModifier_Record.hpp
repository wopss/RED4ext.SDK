#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/PoolValueModifier_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct MutablePoolValueModifier_Record : game::data::PoolValueModifier_Record
{
    static constexpr const char* NAME = "gamedataMutablePoolValueModifier_Record";
    static constexpr const char* ALIAS = "MutablePoolValueModifier_Record";

    uint8_t unkA0[0xE8 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(MutablePoolValueModifier_Record, 0xE8);
} // namespace game::data
using gamedataMutablePoolValueModifier_Record = game::data::MutablePoolValueModifier_Record;
using MutablePoolValueModifier_Record = game::data::MutablePoolValueModifier_Record;
} // namespace RED4ext

// clang-format on
