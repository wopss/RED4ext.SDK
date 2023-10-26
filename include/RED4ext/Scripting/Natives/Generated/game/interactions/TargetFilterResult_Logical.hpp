#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/targeting/SystemTargetFilterResult.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct __declspec(align(0x10)) TargetFilterResult_Logical : game::targeting::SystemTargetFilterResult
{
    static constexpr const char* NAME = "gameinteractionsTargetFilterResult_Logical";
    static constexpr const char* ALIAS = "TargetFilterResult_Logical";

    uint8_t unk70[0xC0 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(TargetFilterResult_Logical, 0xC0);
} // namespace game::interactions
using gameinteractionsTargetFilterResult_Logical = game::interactions::TargetFilterResult_Logical;
using TargetFilterResult_Logical = game::interactions::TargetFilterResult_Logical;
} // namespace RED4ext

// clang-format on
