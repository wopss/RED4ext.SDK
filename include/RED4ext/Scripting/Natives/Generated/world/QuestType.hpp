#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world {
enum class QuestType : int8_t
{
    MainQuest = 0,
    SideQuest = 1,
    StreetStory = 2,
    MinorActivities = 3,
    MiniWorldStories = 4,
    CyberJunkie = 5,
    Courier = 6,
    CourierQuestGiver = 7,
    StuntChallenges = 8,
    StuntChallengesQuestGiver = 9,
    AirDrop = 10,
    BlackMarket = 11,
    Food = 12,
    TechStore = 13,
    Clothing = 14,
    Medpoint = 15,
    WeaponShop = 16,
    Ripperdoc = 17,
    CyberwareShop = 18,
    MeleeWeaponVendor = 19,
    Netrunner = 20,
    Outpost = 21,
    GangWatch = 22,
};
} // namespace world
using worldQuestType = world::QuestType;
} // namespace RED4ext

// clang-format on
