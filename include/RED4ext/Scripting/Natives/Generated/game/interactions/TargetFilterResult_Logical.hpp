#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/targeting/SystemTargetFilterResult.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct TargetFilterResult_Logical : game::targeting::SystemTargetFilterResult
{
    static constexpr const char* NAME = "gameinteractionsTargetFilterResult_Logical";
    static constexpr const char* ALIAS = "TargetFilterResult_Logical";

    uint8_t unk58[0xA8 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(TargetFilterResult_Logical, 0xA8);
} // namespace game::interactions
using TargetFilterResult_Logical = game::interactions::TargetFilterResult_Logical;
} // namespace RED4ext
