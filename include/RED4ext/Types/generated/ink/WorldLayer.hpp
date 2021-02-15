#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/Layer.hpp>

namespace RED4ext
{
namespace ink { 
struct WorldLayer : ink::Layer
{
    static constexpr const char* NAME = "inkWorldLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk150[0x1A8 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(WorldLayer, 0x1A8);
} // namespace ink
} // namespace RED4ext
