#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WorldFluffLayer.hpp>

namespace RED4ext
{
namespace ink { 
struct StreetSignsLayer : ink::WorldFluffLayer
{
    static constexpr const char* NAME = "inkStreetSignsLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1F8[0x250 - 0x1F8]; // 1F8
};
RED4EXT_ASSERT_SIZE(StreetSignsLayer, 0x250);
} // namespace ink
} // namespace RED4ext
