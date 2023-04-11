#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace ink
{
struct FastTravelLoadingControllerSupervisor : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "inkFastTravelLoadingControllerSupervisor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0x100 - 0xE0]; // E0
    Ref<world::Effect> glitchEffect; // 100
    uint8_t unk118[0x178 - 0x118]; // 118
};
RED4EXT_ASSERT_SIZE(FastTravelLoadingControllerSupervisor, 0x178);
} // namespace ink
using inkFastTravelLoadingControllerSupervisor = ink::FastTravelLoadingControllerSupervisor;
} // namespace RED4ext

// clang-format on
