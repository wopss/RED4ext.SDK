#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/IGraphNodeCondition.hpp>

namespace RED4ext
{
namespace quest { 
struct IBaseCondition : graph::IGraphNodeCondition
{
    static constexpr const char* NAME = "questIBaseCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IBaseCondition, 0x30);
} // namespace quest
} // namespace RED4ext
