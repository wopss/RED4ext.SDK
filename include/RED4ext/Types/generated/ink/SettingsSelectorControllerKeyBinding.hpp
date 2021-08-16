#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/SettingsSelectorController.hpp>

namespace RED4ext
{
namespace ink { 
struct SettingsSelectorControllerKeyBinding : ink::SettingsSelectorController
{
    static constexpr const char* NAME = "inkSettingsSelectorControllerKeyBinding";
    static constexpr const char* ALIAS = "SettingsSelectorControllerKeyBinding";

    uint8_t unkB8[0xD0 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(SettingsSelectorControllerKeyBinding, 0xD0);
} // namespace ink
using SettingsSelectorControllerKeyBinding = ink::SettingsSelectorControllerKeyBinding;
} // namespace RED4ext
