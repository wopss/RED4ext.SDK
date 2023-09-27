#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ContentAssignment_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct DeviceContentAssignment_Record : game::data::ContentAssignment_Record
{
    static constexpr const char* NAME = "gamedataDeviceContentAssignment_Record";
    static constexpr const char* ALIAS = "DeviceContentAssignment_Record";

};
RED4EXT_ASSERT_SIZE(DeviceContentAssignment_Record, 0x60);
} // namespace game::data
using gamedataDeviceContentAssignment_Record = game::data::DeviceContentAssignment_Record;
using DeviceContentAssignment_Record = game::data::DeviceContentAssignment_Record;
} // namespace RED4ext

// clang-format on
