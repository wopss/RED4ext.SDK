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
struct Builder : IScriptable
{
    static constexpr const char* NAME = "inkanimBuilder";
    static constexpr const char* ALIAS = "inkAnimBuilder";

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Builder, 0x70);
} // namespace ink::anim
using inkanimBuilder = ink::anim::Builder;
using inkAnimBuilder = ink::anim::Builder;
} // namespace RED4ext

// clang-format on
