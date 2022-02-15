#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CensorshipFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct CensorshipController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkCensorshipController";
    static constexpr const char* ALIAS = NAME;

    CensorshipFlags censorshipFlags; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(CensorshipController, 0x80);
} // namespace ink
} // namespace RED4ext
