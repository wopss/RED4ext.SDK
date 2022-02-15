#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IHudSystem.hpp>

namespace RED4ext
{
namespace ink { 
struct HudSystem : ink::IHudSystem
{
    static constexpr const char* NAME = "inkHudSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xD0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(HudSystem, 0xD0);
} // namespace ink
} // namespace RED4ext
