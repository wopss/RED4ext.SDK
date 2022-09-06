#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct LibTreeDefTreeVariable;

struct LibTreeDefTreeVariablesList
{
    static constexpr const char* NAME = "LibTreeDefTreeVariablesList";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<LibTreeDefTreeVariable>> list; // 00
    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariablesList, 0x18);
} // namespace RED4ext

// clang-format on
