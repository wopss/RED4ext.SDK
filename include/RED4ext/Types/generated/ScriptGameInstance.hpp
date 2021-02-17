#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
struct ScriptGameInstance
{
    static constexpr const char* NAME = "ScriptGameInstance";
    static constexpr const char* ALIAS = "GameInstance";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ScriptGameInstance, 0x8);
using GameInstance = ScriptGameInstance;
} // namespace RED4ext
