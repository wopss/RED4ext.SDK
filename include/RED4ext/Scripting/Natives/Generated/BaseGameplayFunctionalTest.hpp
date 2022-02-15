#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ParamData.hpp>

namespace RED4ext
{
struct BaseGameplayFunctionalTest : IScriptable
{
    static constexpr const char* NAME = "BaseGameplayFunctionalTest";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xB8 - 0x40]; // 40
    float executionTimeSec; // B8
    float maxExecutionTimeSec; // BC
    uint8_t unkC0[0x130 - 0xC0]; // C0
    DynArray<ParamData> paramsData; // 130
    uint8_t unk140[0x1E0 - 0x140]; // 140
};
RED4EXT_ASSERT_SIZE(BaseGameplayFunctionalTest, 0x1E0);
} // namespace RED4ext
