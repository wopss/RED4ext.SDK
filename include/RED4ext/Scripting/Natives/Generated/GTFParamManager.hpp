#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct GTFParamManager : IScriptable
{
    static constexpr const char* NAME = "GTFParamManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xC0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(GTFParamManager, 0xC0);
} // namespace RED4ext

// clang-format on
