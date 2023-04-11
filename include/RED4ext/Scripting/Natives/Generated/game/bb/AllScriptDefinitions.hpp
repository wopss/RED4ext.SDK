#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::bb
{
struct AllScriptDefinitions : IScriptable
{
    static constexpr const char* NAME = "gamebbAllScriptDefinitions";
    static constexpr const char* ALIAS = "AllBlackboardDefinitions";

};
RED4EXT_ASSERT_SIZE(AllScriptDefinitions, 0x40);
} // namespace game::bb
using gamebbAllScriptDefinitions = game::bb::AllScriptDefinitions;
using AllBlackboardDefinitions = game::bb::AllScriptDefinitions;
} // namespace RED4ext

// clang-format on
