#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IAdvertisementWidgetComponentWrapper.hpp>

namespace RED4ext
{
namespace world::ui { 
struct AdvertisementWidgetNodeInstanceWrapper : ink::IAdvertisementWidgetComponentWrapper
{
    static constexpr const char* NAME = "worlduiAdvertisementWidgetNodeInstanceWrapper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x50 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(AdvertisementWidgetNodeInstanceWrapper, 0x50);
} // namespace world::ui
} // namespace RED4ext
