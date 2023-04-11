#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace work
{
struct IScriptedCondition : IScriptable
{
    static constexpr const char* NAME = "workIScriptedCondition";
    static constexpr const char* ALIAS = "WorkspotCondition";

};
RED4EXT_ASSERT_SIZE(IScriptedCondition, 0x40);
} // namespace work
using workIScriptedCondition = work::IScriptedCondition;
using WorkspotCondition = work::IScriptedCondition;
} // namespace RED4ext

// clang-format on
