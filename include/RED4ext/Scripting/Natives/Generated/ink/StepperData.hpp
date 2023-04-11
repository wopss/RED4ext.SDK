#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct IScriptable;

namespace ink
{
struct StepperData
{
    static constexpr const char* NAME = "inkStepperData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    CString label; // 30
    WeakHandle<IScriptable> data; // 50
};
RED4EXT_ASSERT_SIZE(StepperData, 0x60);
} // namespace ink
using inkStepperData = ink::StepperData;
} // namespace RED4ext

// clang-format on
