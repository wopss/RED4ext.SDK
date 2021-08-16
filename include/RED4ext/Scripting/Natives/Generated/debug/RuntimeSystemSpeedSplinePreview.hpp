#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace debug { 
struct RuntimeSystemSpeedSplinePreview : world::IRuntimeSystem
{
    static constexpr const char* NAME = "debugRuntimeSystemSpeedSplinePreview";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemSpeedSplinePreview, 0x70);
} // namespace debug
} // namespace RED4ext
