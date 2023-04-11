#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace text
{
struct TextParameterSet : IScriptable
{
    static constexpr const char* NAME = "textTextParameterSet";
    static constexpr const char* ALIAS = "inkTextParams";

    uint8_t unk40[0x8A8 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(TextParameterSet, 0x8A8);
} // namespace text
using textTextParameterSet = text::TextParameterSet;
using inkTextParams = text::TextParameterSet;
} // namespace RED4ext

// clang-format on
