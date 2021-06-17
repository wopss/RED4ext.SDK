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

    uint8_t unk230[0x2A0 - 0x230]; // 230
    float rotationLerpFactor; // 2A0
    bool ignoreZAxis; // 2A4
    uint8_t unk2A5[0x2B0 - 0x2A5]; // 2A5
};
RED4EXT_ASSERT_SIZE(ConveyorObject, 0x2B0);
} // namespace cp
} // namespace RED4ext
