#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/CBaseEngine.hpp>

namespace RED4ext
{
struct BaseGameEngine : CBaseEngine
{
    static constexpr const char* NAME = "BaseGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk220[0x238 - 0x220]; // 220
};
RED4EXT_ASSERT_SIZE(BaseGameEngine, 0x238);
} // namespace RED4ext
