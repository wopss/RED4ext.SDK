#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/LibTreeDefTreeVariable.hpp>

namespace RED4ext
{
struct LibTreeDefTreeVariableNodeRef : LibTreeDefTreeVariable
{
    static constexpr const char* NAME = "LibTreeDefTreeVariableNodeRef";
    static constexpr const char* ALIAS = NAME;

    NodeRef defaultValue; // 40
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariableNodeRef, 0x48);
} // namespace RED4ext
