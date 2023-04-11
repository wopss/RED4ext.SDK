#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ink
{
struct MenuInstance_SwitchToScenario : red::Event
{
    static constexpr const char* NAME = "inkMenuInstance_SwitchToScenario";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MenuInstance_SwitchToScenario, 0x60);
} // namespace ink
using inkMenuInstance_SwitchToScenario = ink::MenuInstance_SwitchToScenario;
} // namespace RED4ext

// clang-format on
