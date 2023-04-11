#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
namespace quest
{
struct AICommandNodeFunction
{
    static constexpr const char* NAME = "questAICommandNodeFunction";
    static constexpr const char* ALIAS = "AICommandNodeFunction";

    uint32_t order; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName nodeType; // 08
    CName commandCategory; // 10
    CString friendlyName; // 18
    CName paramsType; // 38
    Color nodeColor; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AICommandNodeFunction, 0x48);
} // namespace quest
using questAICommandNodeFunction = quest::AICommandNodeFunction;
using AICommandNodeFunction = quest::AICommandNodeFunction;
} // namespace RED4ext

// clang-format on
