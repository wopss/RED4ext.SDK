#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI
{
struct ScriptGuardArea
{
    static constexpr const char* NAME = "AIScriptGuardArea";
    static constexpr const char* ALIAS = "RestrictMovementArea";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ScriptGuardArea, 0x8);
} // namespace AI
using AIScriptGuardArea = AI::ScriptGuardArea;
using RestrictMovementArea = AI::ScriptGuardArea;
} // namespace RED4ext

// clang-format on
