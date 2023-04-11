#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace appearance
{
struct CensorshipEntry
{
    static constexpr const char* NAME = "appearanceCensorshipEntry";
    static constexpr const char* ALIAS = NAME;

    CName Original; // 00
    CName Censored; // 08
    uint32_t CensorFlags; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(CensorshipEntry, 0x18);
} // namespace appearance
using appearanceCensorshipEntry = appearance::CensorshipEntry;
} // namespace RED4ext

// clang-format on
