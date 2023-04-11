#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::ui
{
struct UIInteractionData
{
    static constexpr const char* NAME = "gameuiUIInteractionData";
    static constexpr const char* ALIAS = "bbUIInteractionData";

    bool interactionListActive; // 00
    bool terminalInteractionActive; // 01
};
RED4EXT_ASSERT_SIZE(UIInteractionData, 0x2);
} // namespace game::ui
using gameuiUIInteractionData = game::ui::UIInteractionData;
using bbUIInteractionData = game::ui::UIInteractionData;
} // namespace RED4ext

// clang-format on
