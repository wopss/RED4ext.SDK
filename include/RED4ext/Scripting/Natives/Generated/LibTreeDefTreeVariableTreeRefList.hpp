#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTreeVariable.hpp>

namespace RED4ext
{
struct LibTreeCTreeReference;

struct LibTreeDefTreeVariableTreeRefList : LibTreeDefTreeVariable
{
    static constexpr const char* NAME = "LibTreeDefTreeVariableTreeRefList";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<LibTreeCTreeReference>> defaultValue; // 40
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariableTreeRefList, 0x50);
} // namespace RED4ext

// clang-format on
