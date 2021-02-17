#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/AI/CTreeNodeDecoratorDefinition.hpp>
#include <RED4ext/Types/generated/LibTreeDefInt32.hpp>

namespace RED4ext
{
namespace AI { 
struct TreeNodeRepeatDefinition : AI::CTreeNodeDecoratorDefinition
{
    static constexpr const char* NAME = "AITreeNodeRepeatDefinition";
    static constexpr const char* ALIAS = NAME;

    LibTreeDefInt32 limit; // 48
};
RED4EXT_ASSERT_SIZE(TreeNodeRepeatDefinition, 0x60);
} // namespace AI
} // namespace RED4ext
