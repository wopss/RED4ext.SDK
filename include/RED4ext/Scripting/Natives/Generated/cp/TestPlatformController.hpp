#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct TestPlatformController : game::Object
{
    static constexpr const char* NAME = "cpTestPlatformController";
    static constexpr const char* ALIAS = NAME;

    NodeRef platform; // 230
    NodeRef pointA; // 238
    NodeRef pointB; // 240
    float speed; // 248
    uint8_t unk24C[0x250 - 0x24C]; // 24C
};
RED4EXT_ASSERT_SIZE(TestPlatformController, 0x250);
} // namespace cp
} // namespace RED4ext
