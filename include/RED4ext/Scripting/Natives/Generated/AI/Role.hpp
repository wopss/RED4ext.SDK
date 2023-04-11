#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI
{
struct Role : IScriptable
{
    static constexpr const char* NAME = "AIRole";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Role, 0x40);
} // namespace AI
using AIRole = AI::Role;
} // namespace RED4ext

// clang-format on
