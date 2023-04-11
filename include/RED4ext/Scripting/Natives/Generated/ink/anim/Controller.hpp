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
struct Controller : IScriptable
{
    static constexpr const char* NAME = "inkanimController";
    static constexpr const char* ALIAS = "inkAnimController";

    uint8_t unk40[0x88 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Controller, 0x88);
} // namespace ink::anim
using inkanimController = ink::anim::Controller;
using inkAnimController = ink::anim::Controller;
} // namespace RED4ext

// clang-format on
