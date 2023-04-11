#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace cp
{
struct TestPlatformController : game::Object
{
    static constexpr const char* NAME = "cpTestPlatformController";
    static constexpr const char* ALIAS = NAME;

    NodeRef platform; // 240
    NodeRef pointA; // 248
    NodeRef pointB; // 250
    float speed; // 258
    uint8_t unk25C[0x260 - 0x25C]; // 25C
};
RED4EXT_ASSERT_SIZE(TestPlatformController, 0x260);
} // namespace cp
using cpTestPlatformController = cp::TestPlatformController;
} // namespace RED4ext

// clang-format on
