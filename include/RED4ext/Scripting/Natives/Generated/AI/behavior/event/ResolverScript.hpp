#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI::behavior::event
{
struct ResolverScript : IScriptable
{
    static constexpr const char* NAME = "AIbehavioreventResolverScript";
    static constexpr const char* ALIAS = "AIScriptEventResolver";

};
RED4EXT_ASSERT_SIZE(ResolverScript, 0x40);
} // namespace AI::behavior::event
using AIbehavioreventResolverScript = AI::behavior::event::ResolverScript;
using AIScriptEventResolver = AI::behavior::event::ResolverScript;
} // namespace RED4ext

// clang-format on
