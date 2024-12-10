#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterRandomizationInfo
{
    static constexpr const char* NAME = "gameuiCharacterRandomizationInfo";
    static constexpr const char* ALIAS = NAME;

    uint32_t minRating; // 00
    uint32_t maxRating; // 04
};
RED4EXT_ASSERT_SIZE(CharacterRandomizationInfo, 0x8);
} // namespace game::ui
using gameuiCharacterRandomizationInfo = game::ui::CharacterRandomizationInfo;
} // namespace RED4ext

// clang-format on
