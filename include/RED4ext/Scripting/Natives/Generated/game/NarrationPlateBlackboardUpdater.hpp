#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct NarrationPlateBlackboardUpdater : ISerializable
{
    static constexpr const char* NAME = "gameNarrationPlateBlackboardUpdater";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x60 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(NarrationPlateBlackboardUpdater, 0x60);
} // namespace game
using gameNarrationPlateBlackboardUpdater = game::NarrationPlateBlackboardUpdater;
} // namespace RED4ext

// clang-format on
