#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/Context.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ui/ContextVisibility.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PhoneElementVisibility
{
    static constexpr const char* NAME = "gameuiPhoneElementVisibility";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    ink::CompoundWidgetReference slot; // 08
    world::ui::ContextVisibility tierVisibility; // 20
    game::ui::Context gameContextVisibility; // 28
    uint8_t unk2C[0x40 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(PhoneElementVisibility, 0x40);
} // namespace game::ui
using gameuiPhoneElementVisibility = game::ui::PhoneElementVisibility;
} // namespace RED4ext

// clang-format on
