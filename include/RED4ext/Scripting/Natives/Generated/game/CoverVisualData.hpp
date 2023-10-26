#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectVisualData.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) CoverVisualData : game::SmartObjectVisualData
{
    static constexpr const char* NAME = "gameCoverVisualData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk80[0xE0 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(CoverVisualData, 0xE0);
} // namespace game
using gameCoverVisualData = game::CoverVisualData;
} // namespace RED4ext

// clang-format on
