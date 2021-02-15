#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world { 
struct RuntimeSystemTransformAnimator : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemTransformAnimator";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xE0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemTransformAnimator, 0xE0);
} // namespace world
} // namespace RED4ext
