#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ObjectNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct IVisionModeNodeType : quest::ObjectNodeType
{
    static constexpr const char* NAME = "questIVisionModeNodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IVisionModeNodeType, 0x30);
} // namespace quest
using questIVisionModeNodeType = quest::IVisionModeNodeType;
} // namespace RED4ext

// clang-format on
