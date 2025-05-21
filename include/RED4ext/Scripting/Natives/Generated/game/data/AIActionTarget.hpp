#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AIActionTarget : int32_t
{
    AssignedVehicle = 0,
    CombatTarget = 1,
    CommandCover = 2,
    CommandMovementDestination = 3,
    ConsideredCover = 4,
    CurrentCover = 5,
    CurrentNetrunnerProxy = 6,
    CustomWorldPosition = 7,
    DesiredCover = 8,
    FriendlyTarget = 9,
    FurthestNavigableSquadmate = 10,
    FurthestSquadmate = 11,
    FurthestThreat = 12,
    HostileOfficer = 13,
    In_LastKnownPosition = 14,
    MountedVehicle = 15,
    MovementDestination = 16,
    NearestDefeatedSquadmate = 17,
    NearestNavigableSquadmate = 18,
    NearestSquadmate = 19,
    NearestThreat = 20,
    NetrunnerProxy = 21,
    ObjectOfInterest = 22,
    Out_LastChasePosition = 23,
    Out_SearchPosition = 24,
    Owner = 25,
    Player = 26,
    PointOfInterest = 27,
    RingBackDestination = 28,
    RingBackLeftDestination = 29,
    RingBackRightDestination = 30,
    RingFrontDestination = 31,
    RingFrontLeftDestination = 32,
    RingFrontRightDestination = 33,
    RingLeftDestination = 34,
    RingRightDestination = 35,
    SelectedCover = 36,
    SpawnPosition = 37,
    SquadOfficer = 38,
    StimSource = 39,
    StimTarget = 40,
    TargetDevice = 41,
    TargetItem = 42,
    TeleportPosition = 43,
    TopFriendly = 44,
    TopThreat = 45,
    VisibleFurthestThreat = 46,
    VisibleNearestThreat = 47,
    VisibleTopThreat = 48,
    Count = 49,
    Invalid = 50,
};
} // namespace game::data
using gamedataAIActionTarget = game::data::AIActionTarget;
} // namespace RED4ext

// clang-format on
