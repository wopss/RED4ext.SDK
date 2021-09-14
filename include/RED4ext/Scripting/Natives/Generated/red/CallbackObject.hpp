#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace red { 
struct CallbackObject : IScriptable
{
    static constexpr const char* NAME = "redCallbackObject";
    static constexpr const char* ALIAS = "CallbackHandle";

};
RED4EXT_ASSERT_SIZE(CallbackObject, 0x40);
} // namespace red
using CallbackHandle = red::CallbackObject;
} // namespace RED4ext
