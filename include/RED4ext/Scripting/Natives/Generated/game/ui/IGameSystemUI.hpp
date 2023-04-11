#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game::ui
{
struct IGameSystemUI : game::IGameSystem
{
    static constexpr const char* NAME = "gameuiIGameSystemUI";
    static constexpr const char* ALIAS = "IUISystem";

};
RED4EXT_ASSERT_SIZE(IGameSystemUI, 0x48);
} // namespace game::ui
using gameuiIGameSystemUI = game::ui::IGameSystemUI;
using IUISystem = game::ui::IGameSystemUI;
} // namespace RED4ext

// clang-format on
