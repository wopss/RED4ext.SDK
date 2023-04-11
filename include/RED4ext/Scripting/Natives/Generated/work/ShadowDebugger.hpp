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
struct ShadowDebugger : work::DebuggingTool
{
    static constexpr const char* NAME = "workShadowDebugger";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x68 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(ShadowDebugger, 0x68);
} // namespace work
using workShadowDebugger = work::ShadowDebugger;
} // namespace RED4ext

// clang-format on
