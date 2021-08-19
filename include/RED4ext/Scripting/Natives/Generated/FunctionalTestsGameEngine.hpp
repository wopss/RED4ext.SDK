#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CGameEngine.hpp>

namespace RED4ext
{
struct FunctionalTestsGameEngine : CGameEngine
{
    static constexpr const char* NAME = "FunctionalTestsGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk348[0x3220 - 0x348]; // 348
};
RED4EXT_ASSERT_SIZE(FunctionalTestsGameEngine, 0x3220);
} // namespace RED4ext
