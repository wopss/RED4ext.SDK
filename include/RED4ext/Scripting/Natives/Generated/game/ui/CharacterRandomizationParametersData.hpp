#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterRandomizationParametersData : IScriptable
{
    static constexpr const char* NAME = "gameuiCharacterRandomizationParametersData";
    static constexpr const char* ALIAS = "CharacterRandomizerParametersData";

    uint8_t unk40[0x80 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CharacterRandomizationParametersData, 0x80);
} // namespace game::ui
using gameuiCharacterRandomizationParametersData = game::ui::CharacterRandomizationParametersData;
using CharacterRandomizerParametersData = game::ui::CharacterRandomizationParametersData;
} // namespace RED4ext

// clang-format on
