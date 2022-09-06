#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/FunctionalTestsResultCode.hpp>

namespace RED4ext
{
struct FunctionalTestsResult
{
    static constexpr const char* NAME = "FunctionalTestsResult";
    static constexpr const char* ALIAS = "FTResult";

    FunctionalTestsResultCode code; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CString msg; // 08
};
RED4EXT_ASSERT_SIZE(FunctionalTestsResult, 0x28);
using FTResult = FunctionalTestsResult;
} // namespace RED4ext

// clang-format on
