#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/LibTreeDefTreeVariable.hpp>

namespace RED4ext
{
struct LibTreeCTreeReference;

struct LibTreeDefTreeVariableTreeRef : LibTreeDefTreeVariable
{
    static constexpr const char* NAME = "LibTreeDefTreeVariableTreeRef";
    static constexpr const char* ALIAS = NAME;

    Handle<LibTreeCTreeReference> defaultValue; // 40
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariableTreeRef, 0x50);
} // namespace RED4ext
