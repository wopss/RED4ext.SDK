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
struct ICustomizationStateUpdater : IScriptable
{
    static constexpr const char* NAME = "gameuiICustomizationStateUpdater";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ICustomizationStateUpdater, 0x58);
} // namespace game::ui
using gameuiICustomizationStateUpdater = game::ui::ICustomizationStateUpdater;
} // namespace RED4ext

// clang-format on
