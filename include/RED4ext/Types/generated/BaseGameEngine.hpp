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

    uint8_t unk250[0x268 - 0x250]; // 250
};
RED4EXT_ASSERT_SIZE(BaseGameEngine, 0x268);
} // namespace RED4ext
