#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) PreventionSystemDebugData
{
    static constexpr const char* NAME = "gamePreventionSystemDebugData";
    static constexpr const char* ALIAS = "PreventionSystemDebugData";

    float totalCrimeScore; // 00
    int32_t heatStage; // 04
    float heatThreshold; // 08
    float heatMultiplierDistrict; // 0C
    float heatMultiplierQuest; // 10
    int32_t totalVehiclesCount; // 14
    int32_t totalAVsCount; // 18
    int32_t totalBlockadesCount; // 1C
    int32_t totalNPCCount; // 20
    int32_t currentVehicleTicketCount; // 24
    int32_t maxVehicleTicketCount; // 28
    int32_t maxTacNPCCount; // 2C
    int32_t engagedVehiclesCount; // 30
    int32_t engagedVehiclesLimit; // 34
    int32_t supportVehiclesCount; // 38
    int32_t supportVehiclesLimit; // 3C
    float maxAVPlayerDistance; // 40
    Vector3 lastAVRequestedSpawnPosition; // 44
    int32_t totalNPCLimit; // 50
    int32_t externalNPCCount; // 54
    int32_t fallbackNPCCount; // 58
    int32_t registeredPendingTickets; // 5C
    uint32_t awaitedAVSpawnPointsRequestID; // 60
    uint8_t unk64[0x70 - 0x64]; // 64
    Vector4 lastKnownPosition; // 70
    CString heatChangeReason; // 80
    bool systemEnabled; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
    DynArray<CString> systemLockEventSources; // A8
    uint8_t unkB8[0xC0 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(PreventionSystemDebugData, 0xC0);
} // namespace game
using gamePreventionSystemDebugData = game::PreventionSystemDebugData;
using PreventionSystemDebugData = game::PreventionSystemDebugData;
} // namespace RED4ext

// clang-format on
