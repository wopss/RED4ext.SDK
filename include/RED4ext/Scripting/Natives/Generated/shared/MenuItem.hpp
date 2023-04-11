#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/shared/MenuItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/shared/MenuItemType.hpp>

namespace RED4ext
{
namespace shared
{
struct MenuItem
{
    static constexpr const char* NAME = "sharedMenuItem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    CString displayName; // 08
    shared::MenuItemType type; // 28
    bool isEnabled; // 29
    uint8_t unk2A[0x30 - 0x2A]; // 2A
    CString tooltip; // 30
    CString checkGroup; // 50
    bool isChecked; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    CName id; // 78
    DynArray<shared::MenuItem> subItems; // 80
};
RED4EXT_ASSERT_SIZE(MenuItem, 0x90);
} // namespace shared
using sharedMenuItem = shared::MenuItem;
} // namespace RED4ext

// clang-format on
