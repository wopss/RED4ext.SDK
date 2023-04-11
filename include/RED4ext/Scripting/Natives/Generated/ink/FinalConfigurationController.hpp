#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FinalConfigurationVisibility.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct FinalConfigurationController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkFinalConfigurationController";
    static constexpr const char* ALIAS = NAME;

    ink::FinalConfigurationVisibility visibilityFlag; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(FinalConfigurationController, 0x80);
} // namespace ink
using inkFinalConfigurationController = ink::FinalConfigurationController;
} // namespace RED4ext

// clang-format on
