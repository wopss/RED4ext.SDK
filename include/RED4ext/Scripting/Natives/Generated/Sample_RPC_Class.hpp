#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct Sample_RPC_Class : IScriptable
{
    static constexpr const char* NAME = "Sample_RPC_Class";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Sample_RPC_Class, 0x48);
} // namespace RED4ext

// clang-format on
