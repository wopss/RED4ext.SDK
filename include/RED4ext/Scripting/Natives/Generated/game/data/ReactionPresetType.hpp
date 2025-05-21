#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class ReactionPresetType : int32_t
{
    Cerberus_Aggressive = 0,
    Child = 1,
    Civilian_Grabbable = 2,
    Civilian_Guard = 3,
    Civilian_Neutral = 4,
    Civilian_NoReaction = 5,
    Civilian_Passive = 6,
    Corpo_Aggressive = 7,
    Corpo_Passive = 8,
    Follower = 9,
    Ganger_Aggressive = 10,
    Ganger_Passive = 11,
    InVehicle_Aggressive = 12,
    InVehicle_Civilian = 13,
    InVehicle_Passive = 14,
    Lore_Aggressive = 15,
    Lore_Civilian = 16,
    Lore_Passive = 17,
    Mechanical_Aggressive = 18,
    Mechanical_NonCombat = 19,
    Mechanical_Passive = 20,
    NoReaction = 21,
    Police_Aggressive = 22,
    Police_Passive = 23,
    Sleep_Aggressive = 24,
    Sleep_Civilian = 25,
    Sleep_Passive = 26,
    Count = 27,
    Invalid = 28,
};
} // namespace game::data
using gamedataReactionPresetType = game::data::ReactionPresetType;
} // namespace RED4ext

// clang-format on
