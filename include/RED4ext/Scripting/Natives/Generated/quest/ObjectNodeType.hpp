#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/INodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct ObjectNodeType : quest::INodeType
{
    static constexpr const char* NAME = "questObjectNodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ObjectNodeType, 0x30);
} // namespace quest
} // namespace RED4ext
