#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Layer.hpp>

namespace RED4ext
{
namespace ink { 
struct WorldFluffLayer : ink::Layer
{
    static constexpr const char* NAME = "inkWorldFluffLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk150[0x200 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(WorldFluffLayer, 0x200);
} // namespace ink
} // namespace RED4ext
