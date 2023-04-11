#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct Cyberdrill_NodeTypeParams
{
    static constexpr const char* NAME = "questCyberdrill_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 00
    bool enable; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(Cyberdrill_NodeTypeParams, 0x10);
} // namespace quest
using questCyberdrill_NodeTypeParams = quest::Cyberdrill_NodeTypeParams;
} // namespace RED4ext

// clang-format on
