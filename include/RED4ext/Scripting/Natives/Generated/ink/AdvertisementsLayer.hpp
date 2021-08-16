#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WorldFluffLayer.hpp>

namespace RED4ext
{
namespace ink { 
struct AdvertisementsLayer : ink::WorldFluffLayer
{
    static constexpr const char* NAME = "inkAdvertisementsLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1F8[0x270 - 0x1F8]; // 1F8
};
RED4EXT_ASSERT_SIZE(AdvertisementsLayer, 0x270);
} // namespace ink
} // namespace RED4ext
