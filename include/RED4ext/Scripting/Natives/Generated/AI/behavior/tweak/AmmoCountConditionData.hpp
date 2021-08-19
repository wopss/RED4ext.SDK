#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak { 
struct AmmoCountConditionData
{
    static constexpr const char* NAME = "AIbehaviortweakAmmoCountConditionData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x118 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(AmmoCountConditionData, 0x118);
} // namespace AI::behavior::tweak
} // namespace RED4ext
