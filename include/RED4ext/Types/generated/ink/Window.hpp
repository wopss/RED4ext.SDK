#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/CanvasWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct Window : ink::CanvasWidget
{
    static constexpr const char* NAME = "inkWindow";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk220[0x260 - 0x220]; // 220
};
RED4EXT_ASSERT_SIZE(Window, 0x260);
} // namespace ink
} // namespace RED4ext
