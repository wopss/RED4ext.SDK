#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/WorldFluffLayer.hpp>

namespace RED4ext
{
namespace ink { 
struct AdvertisementsLayer : ink::WorldFluffLayer
{
    static constexpr const char* NAME = "inkAdvertisementsLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk200[0x278 - 0x200]; // 200
};
RED4EXT_ASSERT_SIZE(AdvertisementsLayer, 0x278);
} // namespace ink
} // namespace RED4ext
