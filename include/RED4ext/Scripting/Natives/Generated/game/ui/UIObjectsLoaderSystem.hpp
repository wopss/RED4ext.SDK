#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/IUIObjectsLoaderSystem.hpp>

namespace RED4ext
{
namespace game::ui
{
struct UIObjectsLoaderSystem : game::ui::IUIObjectsLoaderSystem
{
    static constexpr const char* NAME = "gameuiUIObjectsLoaderSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xE8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(UIObjectsLoaderSystem, 0xE8);
} // namespace game::ui
using gameuiUIObjectsLoaderSystem = game::ui::UIObjectsLoaderSystem;
} // namespace RED4ext

// clang-format on
