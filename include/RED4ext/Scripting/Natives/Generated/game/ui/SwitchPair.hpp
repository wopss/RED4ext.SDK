#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game::ui { struct CharacterCustomizationOption; }

namespace game::ui
{
struct SwitchPair
{
    static constexpr const char* NAME = "gameuiSwitchPair";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::ui::CharacterCustomizationOption> prevOption; // 00
    WeakHandle<game::ui::CharacterCustomizationOption> currOption; // 10
};
RED4EXT_ASSERT_SIZE(SwitchPair, 0x20);
} // namespace game::ui
using gameuiSwitchPair = game::ui::SwitchPair;
} // namespace RED4ext

// clang-format on
