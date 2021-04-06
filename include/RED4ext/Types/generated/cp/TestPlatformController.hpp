#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct TestPlatformController : game::Object
{
    static constexpr const char* NAME = "cpTestPlatformController";
    static constexpr const char* ALIAS = NAME;

    NodeRef platform; // 228
    NodeRef pointA; // 230
    NodeRef pointB; // 238
    float speed; // 240
    uint8_t unk244[0x248 - 0x244]; // 244
};
RED4EXT_ASSERT_SIZE(TestPlatformController, 0x248);
} // namespace cp
} // namespace RED4ext
