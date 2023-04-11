#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EnableBraindanceFinish_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questEnableBraindanceFinish_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EnableBraindanceFinish_NodeType, 0x38);
} // namespace quest
using questEnableBraindanceFinish_NodeType = quest::EnableBraindanceFinish_NodeType;
} // namespace RED4ext

// clang-format on
