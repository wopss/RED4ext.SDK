#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink
{
struct HudEntryInfo : ink::UserData
{
    static constexpr const char* NAME = "inkHudEntryInfo";
    static constexpr const char* ALIAS = NAME;

    Vector2 size; // 40
    Vector2 offset; // 48
};
RED4EXT_ASSERT_SIZE(HudEntryInfo, 0x50);
} // namespace ink
using inkHudEntryInfo = ink::HudEntryInfo;
} // namespace RED4ext

// clang-format on
