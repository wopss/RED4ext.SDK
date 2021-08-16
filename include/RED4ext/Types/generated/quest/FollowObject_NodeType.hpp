#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct FollowObject_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questFollowObject_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    game::EntityReference followObjectRef; // 68
    Vector3 offset; // A0
    float positionLerpSpeed; // AC
    float rotationLerpSpeed; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(FollowObject_NodeType, 0xB8);
} // namespace quest
} // namespace RED4ext
