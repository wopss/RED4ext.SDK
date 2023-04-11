#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SetupGridSelectorForAttributeEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetupGridSelectorForAttributeEvent";
    static constexpr const char* ALIAS = "SetupGridSelectorForAttributeEvent";

    uint32_t attribute; // 40
    uint8_t unk44[0x60 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(SetupGridSelectorForAttributeEvent, 0x60);
} // namespace game::ui
using gameuiSetupGridSelectorForAttributeEvent = game::ui::SetupGridSelectorForAttributeEvent;
using SetupGridSelectorForAttributeEvent = game::ui::SetupGridSelectorForAttributeEvent;
} // namespace RED4ext

// clang-format on
