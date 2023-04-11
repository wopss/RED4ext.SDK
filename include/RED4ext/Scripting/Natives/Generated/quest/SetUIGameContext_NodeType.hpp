#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/UIGameContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/UIGameContextRequestType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetUIGameContext_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetUIGameContext_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::UIGameContextRequestType requestType; // 38
    UIGameContext context; // 3C
};
RED4EXT_ASSERT_SIZE(SetUIGameContext_NodeType, 0x40);
} // namespace quest
using questSetUIGameContext_NodeType = quest::SetUIGameContext_NodeType;
} // namespace RED4ext

// clang-format on
