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
struct ComputerScreenType_Record : game::data::DeviceScreenType_Record
{
    static constexpr const char* NAME = "gamedataComputerScreenType_Record";
    static constexpr const char* ALIAS = "ComputerScreenType_Record";

};
RED4EXT_ASSERT_SIZE(ComputerScreenType_Record, 0x70);
} // namespace game::data
using gamedataComputerScreenType_Record = game::data::ComputerScreenType_Record;
using ComputerScreenType_Record = game::data::ComputerScreenType_Record;
} // namespace RED4ext

// clang-format on
