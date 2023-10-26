#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/LocationInformation.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/TrackedStatusType.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace AI
{
struct __declspec(align(0x10)) TrackedLocation
{
    static constexpr const char* NAME = "AITrackedLocation";
    static constexpr const char* ALIAS = "TrackedLocation";

    AI::LocationInformation lastKnown; // 00
    AI::LocationInformation location; // 20
    AI::LocationInformation sharedLocation; // 40
    AI::LocationInformation sharedLastKnown; // 60
    uint8_t unk80[0x90 - 0x80]; // 80
    Vector4 speed; // 90
    float accuracy; // A0
    float sharedAccuracy; // A4
    float sharedTimeDelay; // A8
    float threat; // AC
    bool visible; // B0
    bool invalidExpectation; // B1
    uint8_t unkB2[0xB4 - 0xB2]; // B2
    AI::TrackedStatusType status; // B4
    WeakHandle<ent::Entity> entity; // B8
    uint8_t unkC8[0xD0 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(TrackedLocation, 0xD0);
} // namespace AI
using AITrackedLocation = AI::TrackedLocation;
using TrackedLocation = AI::TrackedLocation;
} // namespace RED4ext

// clang-format on
