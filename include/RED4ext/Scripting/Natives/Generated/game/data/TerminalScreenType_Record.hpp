#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DeviceScreenType_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct TerminalScreenType_Record : game::data::DeviceScreenType_Record
{
    static constexpr const char* NAME = "gamedataTerminalScreenType_Record";
    static constexpr const char* ALIAS = "TerminalScreenType_Record";

};
RED4EXT_ASSERT_SIZE(TerminalScreenType_Record, 0x70);
} // namespace game::data
using gamedataTerminalScreenType_Record = game::data::TerminalScreenType_Record;
using TerminalScreenType_Record = game::data::TerminalScreenType_Record;
} // namespace RED4ext

// clang-format on
