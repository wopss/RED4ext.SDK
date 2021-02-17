#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/LeafWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct VectorGraphicWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkVectorGraphicWidget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1F0[0x210 - 0x1F0]; // 1F0
};
RED4EXT_ASSERT_SIZE(VectorGraphicWidget, 0x210);
} // namespace ink
} // namespace RED4ext
