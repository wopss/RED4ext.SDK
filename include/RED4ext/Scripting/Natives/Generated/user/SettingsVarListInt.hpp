#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/user/SettingsVar.hpp>

namespace RED4ext
{
namespace user { 
struct SettingsVarListInt : user::SettingsVar
{
    static constexpr const char* NAME = "userSettingsVarListInt";
    static constexpr const char* ALIAS = "ConfigVarListInt";

};
RED4EXT_ASSERT_SIZE(SettingsVarListInt, 0x48);
} // namespace user
using ConfigVarListInt = user::SettingsVarListInt;
} // namespace RED4ext
