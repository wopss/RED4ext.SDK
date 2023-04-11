#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct Processor : ISerializable
{
    static constexpr const char* NAME = "inkanimProcessor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0xA8 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(Processor, 0xA8);
} // namespace ink::anim
using inkanimProcessor = ink::anim::Processor;
} // namespace RED4ext

// clang-format on
