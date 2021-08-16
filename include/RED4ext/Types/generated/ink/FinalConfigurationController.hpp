#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/FinalConfigurationVisibility.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct FinalConfigurationController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkFinalConfigurationController";
    static constexpr const char* ALIAS = NAME;

    ink::FinalConfigurationVisibility visibilityFlag; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(FinalConfigurationController, 0x70);
} // namespace ink
} // namespace RED4ext
