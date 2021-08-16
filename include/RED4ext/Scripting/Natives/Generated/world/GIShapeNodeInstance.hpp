#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GeometryShapeNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct GIShapeNodeInstance : world::GeometryShapeNodeInstance
{
    static constexpr const char* NAME = "worldGIShapeNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(GIShapeNodeInstance, 0xA0);
} // namespace world
} // namespace RED4ext
