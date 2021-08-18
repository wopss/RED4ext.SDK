#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IStreetSignWidgetComponentWrapper.hpp>

namespace RED4ext
{
namespace world::ui { 
struct StreetSignWidgetComponentWrapper : ink::IStreetSignWidgetComponentWrapper
{
    static constexpr const char* NAME = "worlduiStreetSignWidgetComponentWrapper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x60 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(StreetSignWidgetComponentWrapper, 0x60);
} // namespace world::ui
} // namespace RED4ext
