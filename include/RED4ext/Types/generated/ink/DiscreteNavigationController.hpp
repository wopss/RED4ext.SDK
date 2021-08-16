#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct DiscreteNavigationController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkDiscreteNavigationController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0xA8 - 0x68]; // 68
    bool shouldUpdateScrollController; // A8
    bool isNavigalbe; // A9
    bool supportsHoldInput; // AA
    uint8_t unkAB[0xB0 - 0xAB]; // AB
};
RED4EXT_ASSERT_SIZE(DiscreteNavigationController, 0xB0);
} // namespace ink
} // namespace RED4ext
