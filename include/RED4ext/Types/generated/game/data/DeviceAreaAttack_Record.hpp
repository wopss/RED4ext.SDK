#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/Attack_GameEffect_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct DeviceAreaAttack_Record : game::data::Attack_GameEffect_Record
{
    static constexpr const char* NAME = "gamedataDeviceAreaAttack_Record";
    static constexpr const char* ALIAS = "DeviceAreaAttack_Record";

};
RED4EXT_ASSERT_SIZE(DeviceAreaAttack_Record, 0x80);
} // namespace game::data
using DeviceAreaAttack_Record = game::data::DeviceAreaAttack_Record;
} // namespace RED4ext
