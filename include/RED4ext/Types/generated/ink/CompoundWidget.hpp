#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/ink/EChildOrder.hpp>
#include <RED4ext/Types/generated/ink/Margin.hpp>
#include <RED4ext/Types/generated/ink/Widget.hpp>

namespace RED4ext
{
namespace ink { struct MultiChildren; }

namespace ink { 
struct CompoundWidget : ink::Widget
{
    static constexpr const char* NAME = "inkCompoundWidget";
    static constexpr const char* ALIAS = NAME;

    Handle<ink::MultiChildren> children; // 1F0
    ink::EChildOrder childOrder; // 200
    uint8_t unk201[0x204 - 0x201]; // 201
    ink::Margin childMargin; // 204
    uint8_t unk214[0x220 - 0x214]; // 214
};
RED4EXT_ASSERT_SIZE(CompoundWidget, 0x220);
} // namespace ink
} // namespace RED4ext
