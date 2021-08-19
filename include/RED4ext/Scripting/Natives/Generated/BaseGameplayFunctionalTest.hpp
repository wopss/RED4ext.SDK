#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct BaseGameplayFunctionalTest : IScriptable
{
    static constexpr const char* NAME = "BaseGameplayFunctionalTest";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xB8 - 0x40]; // 40
    float executionTimeSec; // B8
    float maxExecutionTimeSec; // BC
    uint8_t unkC0[0x1D0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(BaseGameplayFunctionalTest, 0x1D0);
} // namespace RED4ext
