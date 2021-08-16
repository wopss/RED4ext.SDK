#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest { 
struct IsInMirrorsAreaMapArrayElement
{
    static constexpr const char* NAME = "questIsInMirrorsAreaMapArrayElement";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 00
    bool isInMirrorsArea; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(IsInMirrorsAreaMapArrayElement, 0x10);
} // namespace quest
} // namespace RED4ext
