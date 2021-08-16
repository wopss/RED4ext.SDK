#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ApperanceMaterial.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace physics { 
struct ICollider : ISerializable
{
    static constexpr const char* NAME = "physicsICollider";
    static constexpr const char* ALIAS = NAME;

    Transform localToBody; // 30
    CName material; // 50
    DynArray<physics::ApperanceMaterial> materialApperanceOverrides; // 58
    CName tag; // 68
    Handle<physics::FilterData> filterData; // 70
    float volumeModifier; // 80
    bool isImported; // 84
    bool isQueryShapeOnly; // 85
    uint8_t unk86[0x90 - 0x86]; // 86
};
RED4EXT_ASSERT_SIZE(ICollider, 0x90);
} // namespace physics
} // namespace RED4ext
