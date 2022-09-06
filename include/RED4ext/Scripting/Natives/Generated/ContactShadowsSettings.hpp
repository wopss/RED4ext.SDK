#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ContactShadowsConfig.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct ContactShadowsSettings : IAreaSettings
{
    static constexpr const char* NAME = "ContactShadowsSettings";
    static constexpr const char* ALIAS = NAME;

    ContactShadowsConfig contactShadows; // 48
    uint8_t unk5C[0x70 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(ContactShadowsSettings, 0x70);
} // namespace RED4ext

// clang-format on
