#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CGameEngine.hpp>

namespace RED4ext
{
struct InternalFunctionalTestsGameEngine : CGameEngine
{
    static constexpr const char* NAME = "InternalFunctionalTestsGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk340[0x3368 - 0x340]; // 340
};
RED4EXT_ASSERT_SIZE(InternalFunctionalTestsGameEngine, 0x3368);
} // namespace RED4ext
