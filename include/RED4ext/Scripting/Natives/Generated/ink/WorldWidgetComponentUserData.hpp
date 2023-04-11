#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink
{
struct WorldWidgetComponentUserData : ink::UserData
{
    static constexpr const char* NAME = "inkWorldWidgetComponentUserData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(WorldWidgetComponentUserData, 0x50);
} // namespace ink
using inkWorldWidgetComponentUserData = ink::WorldWidgetComponentUserData;
} // namespace RED4ext

// clang-format on
