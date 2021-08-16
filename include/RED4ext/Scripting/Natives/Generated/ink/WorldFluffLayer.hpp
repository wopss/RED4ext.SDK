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

    uint8_t unk148[0x1F8 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(WorldFluffLayer, 0x1F8);
} // namespace ink
} // namespace RED4ext
