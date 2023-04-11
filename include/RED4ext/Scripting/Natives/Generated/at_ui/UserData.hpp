#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace at_ui
{
struct UserData : ink::UserData
{
    static constexpr const char* NAME = "at_uiUserData";
    static constexpr const char* ALIAS = NAME;

    CString atid; // 40
};
RED4EXT_ASSERT_SIZE(UserData, 0x60);
} // namespace at_ui
using at_uiUserData = at_ui::UserData;
} // namespace RED4ext

// clang-format on
