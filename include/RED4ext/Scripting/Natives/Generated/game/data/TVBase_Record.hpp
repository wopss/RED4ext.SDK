#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Device_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct TVBase_Record : game::data::Device_Record
{
    static constexpr const char* NAME = "gamedataTVBase_Record";
    static constexpr const char* ALIAS = "TVBase_Record";

    uint8_t unkB8[0xC8 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(TVBase_Record, 0xC8);
} // namespace game::data
using gamedataTVBase_Record = game::data::TVBase_Record;
using TVBase_Record = game::data::TVBase_Record;
} // namespace RED4ext

// clang-format on
