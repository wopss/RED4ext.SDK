#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink { struct StyleResource; }

namespace ink
{
struct StyleResourceWrapper : ISerializable
{
    static constexpr const char* NAME = "inkStyleResourceWrapper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x68 - 0x30]; // 30
    RaRef<ink::StyleResource> styleResource; // 68
    uint8_t unk70[0x90 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(StyleResourceWrapper, 0x90);
} // namespace ink
using inkStyleResourceWrapper = ink::StyleResourceWrapper;
} // namespace RED4ext

// clang-format on
