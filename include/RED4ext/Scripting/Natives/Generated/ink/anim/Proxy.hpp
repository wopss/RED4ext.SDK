#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct Proxy : IScriptable
{
    static constexpr const char* NAME = "inkanimProxy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Proxy, 0x50);
} // namespace ink::anim
} // namespace RED4ext
