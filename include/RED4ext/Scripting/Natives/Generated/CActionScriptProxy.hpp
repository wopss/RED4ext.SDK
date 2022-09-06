#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct CActionScriptProxy : IScriptable
{
    static constexpr const char* NAME = "CActionScriptProxy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CActionScriptProxy, 0x60);
} // namespace RED4ext

// clang-format on
