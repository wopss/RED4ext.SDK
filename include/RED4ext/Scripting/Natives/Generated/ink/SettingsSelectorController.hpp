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
struct SettingsSelectorController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkSettingsSelectorController";
    static constexpr const char* ALIAS = "SettingsSelectorController";

    uint8_t unk78[0xC8 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(SettingsSelectorController, 0xC8);
} // namespace ink
using inkSettingsSelectorController = ink::SettingsSelectorController;
using SettingsSelectorController = ink::SettingsSelectorController;
} // namespace RED4ext

// clang-format on
