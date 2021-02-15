#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct SettingsSelectorController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkSettingsSelectorController";
    static constexpr const char* ALIAS = "SettingsSelectorController";

    uint8_t unk68[0xB8 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(SettingsSelectorController, 0xB8);
} // namespace ink
using SettingsSelectorController = ink::SettingsSelectorController;
} // namespace RED4ext
