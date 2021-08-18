#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink { 
struct IEffect : ISerializable
{
    static constexpr const char* NAME = "inkIEffect";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x48 - 0x30]; // 30
    bool isEnabled; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    CName effectName; // 50
    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(IEffect, 0x68);
} // namespace ink
} // namespace RED4ext
