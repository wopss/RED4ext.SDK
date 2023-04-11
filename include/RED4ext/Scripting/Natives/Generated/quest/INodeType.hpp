#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IBaseNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct INodeType : quest::IBaseNodeType
{
    static constexpr const char* NAME = "questINodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(INodeType, 0x30);
} // namespace quest
using questINodeType = quest::INodeType;
} // namespace RED4ext

// clang-format on
