#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/user/SettingsVar.hpp>

namespace RED4ext
{
namespace user { 
struct SettingsVarInt : user::SettingsVar
{
    static constexpr const char* NAME = "userSettingsVarInt";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SettingsVarInt, 0x48);
} // namespace user
} // namespace RED4ext
