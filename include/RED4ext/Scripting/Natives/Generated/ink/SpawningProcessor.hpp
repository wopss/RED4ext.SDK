#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink
{
struct SpawningProcessor : ISerializable
{
    static constexpr const char* NAME = "inkSpawningProcessor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0xB8 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(SpawningProcessor, 0xB8);
} // namespace ink
using inkSpawningProcessor = ink::SpawningProcessor;
} // namespace RED4ext

// clang-format on
