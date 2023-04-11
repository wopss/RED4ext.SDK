#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace world { struct TriggerAreaNodeInstance; }

namespace world
{
struct TriggerAreaEventInfo
{
    static constexpr const char* NAME = "worldTriggerAreaEventInfo";
    static constexpr const char* ALIAS = NAME;

    Handle<world::TriggerAreaNodeInstance> nodeInstance; // 00
    Vector3 eventWorldPosition; // 10
    uint32_t numActivatorsInArea; // 1C
    uint32_t activatorID; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(TriggerAreaEventInfo, 0x28);
} // namespace world
using worldTriggerAreaEventInfo = world::TriggerAreaEventInfo;
} // namespace RED4ext

// clang-format on
