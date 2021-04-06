#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct ConveyorObject : game::Object
{
    static constexpr const char* NAME = "cpConveyorObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk228[0x290 - 0x228]; // 228
    float rotationLerpFactor; // 290
    bool ignoreZAxis; // 294
    uint8_t unk295[0x2A0 - 0x295]; // 295
};
RED4EXT_ASSERT_SIZE(ConveyorObject, 0x2A0);
} // namespace cp
} // namespace RED4ext
