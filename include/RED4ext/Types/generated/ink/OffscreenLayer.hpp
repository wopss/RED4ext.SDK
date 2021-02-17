#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/Layer.hpp>

namespace RED4ext
{
namespace ink { 
struct OffscreenLayer : ink::Layer
{
    static constexpr const char* NAME = "inkOffscreenLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk150[0x178 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(OffscreenLayer, 0x178);
} // namespace ink
} // namespace RED4ext
