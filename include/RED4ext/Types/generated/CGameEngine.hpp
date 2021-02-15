#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/BaseGameEngine.hpp>

namespace RED4ext
{
struct CGameEngine : BaseGameEngine
{
    static constexpr const char* NAME = "CGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk238[0x298 - 0x238]; // 238
};
RED4EXT_ASSERT_SIZE(CGameEngine, 0x298);
} // namespace RED4ext
