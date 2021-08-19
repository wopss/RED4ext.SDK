#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace quest { 
struct IInspectListener : IScriptable
{
    static constexpr const char* NAME = "questIInspectListener";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IInspectListener, 0x40);
} // namespace quest
} // namespace RED4ext
