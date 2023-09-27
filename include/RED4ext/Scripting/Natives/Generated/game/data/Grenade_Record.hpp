#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Gadget_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct Grenade_Record : game::data::Gadget_Record
{
    static constexpr const char* NAME = "gamedataGrenade_Record";
    static constexpr const char* ALIAS = "Grenade_Record";

    uint8_t unk5F0[0x7C8 - 0x5F0]; // 5F0
};
RED4EXT_ASSERT_SIZE(Grenade_Record, 0x7C8);
} // namespace game::data
using gamedataGrenade_Record = game::data::Grenade_Record;
using Grenade_Record = game::data::Grenade_Record;
} // namespace RED4ext

// clang-format on
