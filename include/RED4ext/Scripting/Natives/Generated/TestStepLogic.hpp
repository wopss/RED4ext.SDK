#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ParamData.hpp>

namespace RED4ext
{
struct TestStepLogic : IScriptable
{
    static constexpr const char* NAME = "TestStepLogic";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xD0 - 0x40]; // 40
    float executionTimeSec; // D0
    float maxExecutionTimeSec; // D4
    uint8_t unkD8[0x148 - 0xD8]; // D8
    DynArray<ParamData> paramsData; // 148
    uint8_t unk158[0x1F8 - 0x158]; // 158
};
RED4EXT_ASSERT_SIZE(TestStepLogic, 0x1F8);
} // namespace RED4ext

// clang-format on
