#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/user/SettingsVar.hpp>

namespace RED4ext
{
namespace user { 
struct SettingsVarListName : user::SettingsVar
{
    static constexpr const char* NAME = "userSettingsVarListName";
    static constexpr const char* ALIAS = "ConfigVarListName";

};
RED4EXT_ASSERT_SIZE(SettingsVarListName, 0x48);
} // namespace user
using ConfigVarListName = user::SettingsVarListName;
} // namespace RED4ext
