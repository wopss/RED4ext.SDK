#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/CGameEngine.hpp>

namespace RED4ext
{
struct FunctionalTestsGameEngine : CGameEngine
{
    static constexpr const char* NAME = "FunctionalTestsGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2C8[0x2F68 - 0x2C8]; // 2C8
};
RED4EXT_ASSERT_SIZE(FunctionalTestsGameEngine, 0x2F68);
} // namespace RED4ext
