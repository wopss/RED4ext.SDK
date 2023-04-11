#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak
{
struct TargetHelper
{
    static constexpr const char* NAME = "AIbehaviortweakTargetHelper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(TargetHelper, 0x30);
} // namespace AI::behavior::tweak
using AIbehaviortweakTargetHelper = AI::behavior::tweak::TargetHelper;
} // namespace RED4ext

// clang-format on
