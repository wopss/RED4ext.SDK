#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace ink { 
struct FastTravelLoadingControllerSupervisor : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "inkFastTravelLoadingControllerSupervisor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xF0 - 0xD0]; // D0
    Ref<world::Effect> glitchEffect; // F0
    uint8_t unk108[0x150 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(FastTravelLoadingControllerSupervisor, 0x150);
} // namespace ink
} // namespace RED4ext
