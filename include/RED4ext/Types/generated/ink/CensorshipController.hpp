#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/CensorshipFlags.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct CensorshipController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkCensorshipController";
    static constexpr const char* ALIAS = NAME;

    CensorshipFlags censorshipFlags; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(CensorshipController, 0x70);
} // namespace ink
} // namespace RED4ext
