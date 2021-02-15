#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/EditorDebugColoringSettings.hpp>

namespace RED4ext
{
namespace world { 
struct DebugColoring_SameResourceName : world::EditorDebugColoringSettings
{
    static constexpr const char* NAME = "worldDebugColoring_SameResourceName";
    static constexpr const char* ALIAS = NAME;

    uint8_t alpha; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(DebugColoring_SameResourceName, 0x38);
} // namespace world
} // namespace RED4ext
