#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct ScriptUtils
{
    static constexpr const char* NAME = "AIbehaviorScriptUtils";
    static constexpr const char* ALIAS = "AIScriptUtils";

    uint8_t unk00[0x1 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ScriptUtils, 0x1);
} // namespace AI::behavior
using AIbehaviorScriptUtils = AI::behavior::ScriptUtils;
using AIScriptUtils = AI::behavior::ScriptUtils;
} // namespace RED4ext

// clang-format on
