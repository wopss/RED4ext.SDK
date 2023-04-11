#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TimeDilation_NodeTypeParam.hpp>

namespace RED4ext
{
namespace quest { struct TimeDilation_Operation; }

namespace quest
{
struct TimeDilation_World : quest::TimeDilation_NodeTypeParam
{
    static constexpr const char* NAME = "questTimeDilation_World";
    static constexpr const char* ALIAS = NAME;

    CName reason; // 30
    Handle<quest::TimeDilation_Operation> operation; // 38
};
RED4EXT_ASSERT_SIZE(TimeDilation_World, 0x48);
} // namespace quest
using questTimeDilation_World = quest::TimeDilation_World;
} // namespace RED4ext

// clang-format on
