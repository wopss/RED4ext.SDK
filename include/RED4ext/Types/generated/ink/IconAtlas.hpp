#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/IIconAtlas.hpp>

namespace RED4ext
{
namespace ink { 
struct IconAtlas : ink::IIconAtlas
{
    static constexpr const char* NAME = "inkIconAtlas";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xE0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IconAtlas, 0xE0);
} // namespace ink
} // namespace RED4ext
