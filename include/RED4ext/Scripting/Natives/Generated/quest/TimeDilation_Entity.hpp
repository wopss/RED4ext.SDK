#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ETimeDilationOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TimeDilation_NodeTypeParam.hpp>

namespace RED4ext
{
namespace quest { struct TimeDilation_Operation; }

namespace quest
{
struct TimeDilation_Entity : quest::TimeDilation_NodeTypeParam
{
    static constexpr const char* NAME = "questTimeDilation_Entity";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::TimeDilation_Operation> operation; // 30
    quest::ETimeDilationOverride globalTimeDilationOverride; // 40
    quest::ETimeDilationOverride parentTimeDilationOverride; // 44
    DynArray<NodeRef> entities; // 48
};
RED4EXT_ASSERT_SIZE(TimeDilation_Entity, 0x58);
} // namespace quest
using questTimeDilation_Entity = quest::TimeDilation_Entity;
} // namespace RED4ext

// clang-format on
