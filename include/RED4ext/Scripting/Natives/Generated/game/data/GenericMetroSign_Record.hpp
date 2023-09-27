#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/BaseSign_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct GenericMetroSign_Record : game::data::BaseSign_Record
{
    static constexpr const char* NAME = "gamedataGenericMetroSign_Record";
    static constexpr const char* ALIAS = "GenericMetroSign_Record";

    uint8_t unk70[0xA0 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(GenericMetroSign_Record, 0xA0);
} // namespace game::data
using gamedataGenericMetroSign_Record = game::data::GenericMetroSign_Record;
using GenericMetroSign_Record = game::data::GenericMetroSign_Record;
} // namespace RED4ext

// clang-format on
