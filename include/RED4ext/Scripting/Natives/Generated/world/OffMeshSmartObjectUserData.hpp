#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/OffMeshConnectionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/OffMeshUserData.hpp>

namespace RED4ext
{
namespace game { struct SmartObjectDefinition; }

namespace world
{
struct __declspec(align(0x10)) OffMeshSmartObjectUserData : world::OffMeshUserData
{
    static constexpr const char* NAME = "worldOffMeshSmartObjectUserData";
    static constexpr const char* ALIAS = NAME;

    WorldTransform nodeTransform; // 30
    Vector3 localSpaceTrajectoryStartPoint; // 50
    Vector3 localSpaceTrajectoryEndPoint; // 5C
    Handle<game::SmartObjectDefinition> smartObjectDefinition; // 68
    world::OffMeshConnectionType type; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(OffMeshSmartObjectUserData, 0x80);
} // namespace world
using worldOffMeshSmartObjectUserData = world::OffMeshSmartObjectUserData;
} // namespace RED4ext

// clang-format on
