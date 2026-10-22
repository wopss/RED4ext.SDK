#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct IEffect : IScriptable
{
    static constexpr const char* NAME = "inkIEffect";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
    bool isEnabled; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    CName effectName; // 58
};
RED4EXT_ASSERT_SIZE(IEffect, 0x60);
} // namespace ink
using inkIEffect = ink::IEffect;
} // namespace RED4ext

// clang-format on
