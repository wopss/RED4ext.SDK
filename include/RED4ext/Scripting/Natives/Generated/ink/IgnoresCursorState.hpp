#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink { 
struct IgnoresCursorState : ink::UserData
{
    static constexpr const char* NAME = "inkIgnoresCursorState";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IgnoresCursorState, 0x40);
} // namespace ink
} // namespace RED4ext
