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

    uint8_t unk2D0[0x2F70 - 0x2D0]; // 2D0
};
RED4EXT_ASSERT_SIZE(FunctionalTestsGameEngine, 0x2F70);
} // namespace RED4ext
