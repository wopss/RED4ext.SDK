#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierBase.hpp>

namespace RED4ext
{
namespace game
{
struct CurveStatModifier : game::StatModifierBase
{
    static constexpr const char* NAME = "gameCurveStatModifier";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x30 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CurveStatModifier, 0x30);
} // namespace game
using gameCurveStatModifier = game::CurveStatModifier;
} // namespace RED4ext

// clang-format on
