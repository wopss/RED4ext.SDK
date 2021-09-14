#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { 
struct SimpleScreenMessage
{
    static constexpr const char* NAME = "gameSimpleScreenMessage";
    static constexpr const char* ALIAS = "SimpleScreenMessage";

    bool isShown; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    float duration; // 04
    CString message; // 08
    bool isInstant; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(SimpleScreenMessage, 0x30);
} // namespace game
using SimpleScreenMessage = game::SimpleScreenMessage;
} // namespace RED4ext
