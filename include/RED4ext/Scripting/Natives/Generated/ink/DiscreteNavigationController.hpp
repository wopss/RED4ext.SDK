#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct DiscreteNavigationController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkDiscreteNavigationController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xB8 - 0x78]; // 78
    bool shouldUpdateScrollController; // B8
    bool isNavigalbe; // B9
    bool supportsHoldInput; // BA
    uint8_t unkBB[0xC0 - 0xBB]; // BB
};
RED4EXT_ASSERT_SIZE(DiscreteNavigationController, 0xC0);
} // namespace ink
using inkDiscreteNavigationController = ink::DiscreteNavigationController;
} // namespace RED4ext

// clang-format on
