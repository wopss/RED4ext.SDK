#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/QualitySetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world { 
struct PerformanceAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldPerformanceAreaNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::QualitySetting> qualitySettingsArray; // 70
    CName disableCrowdUniqueName; // 80
    float globalStreamingDistanceScale; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(PerformanceAreaNode, 0x90);
} // namespace world
} // namespace RED4ext
