#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/WorldFluffLayer.hpp>

namespace RED4ext
{
namespace ink { 
struct StreetSignsLayer : ink::WorldFluffLayer
{
    static constexpr const char* NAME = "inkStreetSignsLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk200[0x258 - 0x200]; // 200
};
RED4EXT_ASSERT_SIZE(StreetSignsLayer, 0x258);
} // namespace ink
} // namespace RED4ext
