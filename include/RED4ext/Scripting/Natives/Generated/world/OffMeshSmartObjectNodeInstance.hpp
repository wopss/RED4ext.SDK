#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/OffMeshConnectionNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct OffMeshSmartObjectNodeInstance : world::OffMeshConnectionNodeInstance
{
    static constexpr const char* NAME = "worldOffMeshSmartObjectNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0xF0 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(OffMeshSmartObjectNodeInstance, 0xF0);
} // namespace world
} // namespace RED4ext
