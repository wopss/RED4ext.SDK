#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { struct ITutorial_NodeSubType; }

namespace quest
{
struct Tutorial_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questTutorial_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ITutorial_NodeSubType> subtype; // 38
};
RED4EXT_ASSERT_SIZE(Tutorial_NodeType, 0x48);
} // namespace quest
using questTutorial_NodeType = quest::Tutorial_NodeType;
} // namespace RED4ext

// clang-format on
