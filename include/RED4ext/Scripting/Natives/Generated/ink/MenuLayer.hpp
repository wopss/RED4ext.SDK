#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FullScreenLayer.hpp>

namespace RED4ext
{
namespace ink { 
struct MenuLayer : ink::FullScreenLayer
{
    static constexpr const char* NAME = "inkMenuLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk148[0x198 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(MenuLayer, 0x198);
} // namespace ink
} // namespace RED4ext
