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
struct IUIIconsGeneratorSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameuiIUIIconsGeneratorSystem";
    static constexpr const char* ALIAS = "IUIIconsGeneratorSystem";

};
RED4EXT_ASSERT_SIZE(IUIIconsGeneratorSystem, 0x48);
} // namespace game::ui
using gameuiIUIIconsGeneratorSystem = game::ui::IUIIconsGeneratorSystem;
using IUIIconsGeneratorSystem = game::ui::IUIIconsGeneratorSystem;
} // namespace RED4ext

// clang-format on
