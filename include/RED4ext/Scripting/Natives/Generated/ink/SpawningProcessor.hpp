#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink { 
struct SpawningProcessor : ISerializable
{
    static constexpr const char* NAME = "inkSpawningProcessor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x70 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(SpawningProcessor, 0x70);
} // namespace ink
} // namespace RED4ext
