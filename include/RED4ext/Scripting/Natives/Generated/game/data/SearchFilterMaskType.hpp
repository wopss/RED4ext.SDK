#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class SearchFilterMaskType : int32_t
{
    Att_Friendly = 0,
    Att_Hostile = 1,
    Att_Neutral = 2,
    Obj_Device = 3,
    Obj_Other = 4,
    Obj_Player = 5,
    Obj_Puppet = 6,
    Obj_Sensor = 7,
    Sp_Aggressive = 8,
    Sp_AimAssistEnabled = 9,
    Sp_VisibleThroughGeometry = 10,
    St_Alive = 11,
    St_AliveAndActive = 12,
    St_Conscious = 13,
    St_Dead = 14,
    St_DeadOrInactive = 15,
    St_Defeated = 16,
    St_MountedToBike = 17,
    St_MountedToCar = 18,
    St_MountedToVehicle = 19,
    St_NotDefeated = 20,
    St_QuickHackable = 21,
    St_TurnedOff = 22,
    St_TurnedOn = 23,
    St_Unconscious = 24,
    TF_None = 25,
    Count = 26,
    Invalid = 27,
};
} // namespace game::data
using gamedataSearchFilterMaskType = game::data::SearchFilterMaskType;
} // namespace RED4ext

// clang-format on
