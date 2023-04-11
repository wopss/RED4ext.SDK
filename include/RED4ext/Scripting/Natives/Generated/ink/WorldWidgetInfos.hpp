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
struct WorldWidgetInfos : ink::UserData
{
    static constexpr const char* NAME = "inkWorldWidgetInfos";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(WorldWidgetInfos, 0x50);
} // namespace ink
using inkWorldWidgetInfos = ink::WorldWidgetInfos;
} // namespace RED4ext

// clang-format on
