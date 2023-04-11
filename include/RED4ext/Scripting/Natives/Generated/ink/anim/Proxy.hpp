#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct Proxy : IScriptable
{
    static constexpr const char* NAME = "inkanimProxy";
    static constexpr const char* ALIAS = "inkAnimProxy";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Proxy, 0x50);
} // namespace ink::anim
using inkanimProxy = ink::anim::Proxy;
using inkAnimProxy = ink::anim::Proxy;
} // namespace RED4ext

// clang-format on
