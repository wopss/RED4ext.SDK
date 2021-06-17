#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct TestPhysXDynamicMovement : game::Object
{
    static constexpr const char* NAME = "cpTestPhysXDynamicMovement";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x250 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(TestPhysXDynamicMovement, 0x250);
} // namespace cp
} // namespace RED4ext
