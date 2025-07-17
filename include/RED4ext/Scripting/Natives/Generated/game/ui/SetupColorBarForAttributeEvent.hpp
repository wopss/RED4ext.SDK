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
struct SetupColorBarForAttributeEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetupColorBarForAttributeEvent";
    static constexpr const char* ALIAS = "SetupColorBarForAttributeEvent";

    uint32_t attribute; // 40
    float startValue; // 44
    float minValue; // 48
    float maxValue; // 4C
    float step; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(SetupColorBarForAttributeEvent, 0x58);
} // namespace game::ui
using gameuiSetupColorBarForAttributeEvent = game::ui::SetupColorBarForAttributeEvent;
using SetupColorBarForAttributeEvent = game::ui::SetupColorBarForAttributeEvent;
} // namespace RED4ext

// clang-format on
