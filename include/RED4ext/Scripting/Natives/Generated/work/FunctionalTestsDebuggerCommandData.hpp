#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/DebuggerCommandData.hpp>

namespace RED4ext
{
namespace work
{
struct FunctionalTestsDebuggerCommandData : work::DebuggerCommandData
{
    static constexpr const char* NAME = "workFunctionalTestsDebuggerCommandData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk20[0x30 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(FunctionalTestsDebuggerCommandData, 0x30);
} // namespace work
using workFunctionalTestsDebuggerCommandData = work::FunctionalTestsDebuggerCommandData;
} // namespace RED4ext

// clang-format on
