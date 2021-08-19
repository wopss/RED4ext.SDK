#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct ScriptGameInstance
{
    static constexpr const char* NAME = "ScriptGameInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ScriptGameInstance, 0x18);
} // namespace RED4ext
