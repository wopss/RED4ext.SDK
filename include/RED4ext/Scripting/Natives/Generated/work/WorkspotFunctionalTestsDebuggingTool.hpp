#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/DebuggingTool.hpp>

namespace RED4ext
{
namespace work
{
struct WorkspotFunctionalTestsDebuggingTool : work::DebuggingTool
{
    static constexpr const char* NAME = "workWorkspotFunctionalTestsDebuggingTool";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(WorkspotFunctionalTestsDebuggingTool, 0x28);
} // namespace work
using workWorkspotFunctionalTestsDebuggingTool = work::WorkspotFunctionalTestsDebuggingTool;
} // namespace RED4ext

// clang-format on
