#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNonSignalStoppingNodeType.hpp>

namespace RED4ext
{
namespace quest { struct TimeDilation_NodeTypeParam; }

namespace quest
{
struct TimeDilation_NodeType : quest::IGameManagerNonSignalStoppingNodeType
{
    static constexpr const char* NAME = "questTimeDilation_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<quest::TimeDilation_NodeTypeParam>> params; // 38
};
RED4EXT_ASSERT_SIZE(TimeDilation_NodeType, 0x48);
} // namespace quest
using questTimeDilation_NodeType = quest::TimeDilation_NodeType;
} // namespace RED4ext

// clang-format on
