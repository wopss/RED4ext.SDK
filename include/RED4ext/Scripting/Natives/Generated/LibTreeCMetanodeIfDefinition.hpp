#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeCMetanodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefBool.hpp>

namespace RED4ext
{
struct LibTreeINodeDefinition;

struct LibTreeCMetanodeIfDefinition : LibTreeCMetanodeDefinition
{
    static constexpr const char* NAME = "LibTreeCMetanodeIfDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<LibTreeINodeDefinition> ifBranch; // 38
    Handle<LibTreeINodeDefinition> elseBranch; // 48
    LibTreeDefBool ifCondition; // 58
};
RED4EXT_ASSERT_SIZE(LibTreeCMetanodeIfDefinition, 0x70);
} // namespace RED4ext

// clang-format on
