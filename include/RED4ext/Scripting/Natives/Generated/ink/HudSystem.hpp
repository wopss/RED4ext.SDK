#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IHudSystem.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) HudSystem : ink::IHudSystem
{
    static constexpr const char* NAME = "inkHudSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xD0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(HudSystem, 0xD0);
} // namespace ink
using inkHudSystem = ink::HudSystem;
} // namespace RED4ext

// clang-format on
