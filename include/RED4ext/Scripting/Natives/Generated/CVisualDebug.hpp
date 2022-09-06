#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct CVisualDebug : IScriptable
{
    static constexpr const char* NAME = "CVisualDebug";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xD8 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CVisualDebug, 0xD8);
} // namespace RED4ext

// clang-format on
