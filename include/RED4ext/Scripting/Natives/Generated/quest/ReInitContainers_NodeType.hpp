#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IItemManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ReInitContainers_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct ReInitContainers_NodeType : quest::IItemManagerNodeType
{
    static constexpr const char* NAME = "questReInitContainers_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::ReInitContainers_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(ReInitContainers_NodeType, 0x40);
} // namespace quest
using questReInitContainers_NodeType = quest::ReInitContainers_NodeType;
} // namespace RED4ext

// clang-format on
