#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CoverSelectionParameters.hpp>

namespace RED4ext
{
namespace AI
{
struct TacticLimiter : AI::CoverSelectionParameters
{
    static constexpr const char* NAME = "AITacticLimiter";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(TacticLimiter, 0x18);
} // namespace AI
using AITacticLimiter = AI::TacticLimiter;
} // namespace RED4ext

// clang-format on
