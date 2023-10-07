#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world::ui
{
struct RuntimeSystemUI : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worlduiRuntimeSystemUI";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x298 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemUI, 0x298);
} // namespace world::ui
using worlduiRuntimeSystemUI = world::ui::RuntimeSystemUI;
} // namespace RED4ext

// clang-format on
