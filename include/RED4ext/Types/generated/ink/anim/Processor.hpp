#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct Processor : ISerializable
{
    static constexpr const char* NAME = "inkanimProcessor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0xA8 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(Processor, 0xA8);
} // namespace ink::anim
} // namespace RED4ext
