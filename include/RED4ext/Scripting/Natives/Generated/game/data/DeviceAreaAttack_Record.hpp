#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Attack_GameEffect_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct DeviceAreaAttack_Record : game::data::Attack_GameEffect_Record
{
    static constexpr const char* NAME = "gamedataDeviceAreaAttack_Record";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DeviceAreaAttack_Record, 0x88);
} // namespace game::data
} // namespace RED4ext
