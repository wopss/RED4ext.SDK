#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::targeting {
enum class SystemSearchFilterMaskValue : int32_t
{
    Obj_Player = 1,
    Obj_Puppet = 2,
    Obj_Sensor = 4,
    Obj_Device = 8,
    Obj_Other = 16,
    Att_Friendly = 32,
    Att_Hostile = 64,
    Att_Neutral = 128,
    Sp_AimAssistEnabled = 256,
    Sp_Aggressive = 512,
    St_Alive = 2048,
    St_Dead = 4096,
    St_NotDefeated = 8192,
    St_Defeated = 16384,
    St_Conscious = 32768,
    St_Unconscious = 65536,
    St_TurnedOn = 131072,
    St_AliveAndActive = 174080,
    St_TurnedOff = 262144,
    St_QuickHackable = 524288,
};
} // namespace game::targeting
using gametargetingSystemSearchFilterMaskValue = game::targeting::SystemSearchFilterMaskValue;
using TSFMV = game::targeting::SystemSearchFilterMaskValue;
} // namespace RED4ext

// clang-format on
