#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/CGameEngine.hpp>

namespace RED4ext
{
struct DebugGameEngine : CGameEngine
{
    static constexpr const char* NAME = "DebugGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk298[0x348 - 0x298]; // 298
};
RED4EXT_ASSERT_SIZE(DebugGameEngine, 0x348);
} // namespace RED4ext
