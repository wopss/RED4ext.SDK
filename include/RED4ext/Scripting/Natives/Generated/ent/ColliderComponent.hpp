#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/TrafficGenDynamicTrafficSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>

namespace RED4ext
{
namespace ent { struct ColliderComponentShape; }
namespace physics { struct FilterData; }
namespace physics { struct ICollider; }

namespace ent { 
struct ColliderComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entColliderComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x138 - 0x120]; // 120
    DynArray<Handle<ent::ColliderComponentShape>> shapes; // 138
    DynArray<Handle<physics::ICollider>> colliders; // 148
    physics::SimulationType simulationType; // 158
    bool startInactive; // 159
    bool useCCD; // 15A
    bool sendOnStoppedMovingEvents; // 15B
    uint8_t unk15C[0x160 - 0x15C]; // 15C
    float massOverride; // 160
    float mass; // 164
    float volume; // 168
    Vector3 inertia; // 16C
    uint8_t unk178[0x180 - 0x178]; // 178
    Transform comOffset; // 180
    Handle<physics::FilterData> filterData; // 1A0
    TrafficGenDynamicTrafficSetting dynamicTrafficSetting; // 1B0
    uint8_t unk1B2[0x1E0 - 0x1B2]; // 1B2
};
RED4EXT_ASSERT_SIZE(ColliderComponent, 0x1E0);
} // namespace ent
} // namespace RED4ext
