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
struct InkGameSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameuiInkGameSystem";
    static constexpr const char* ALIAS = "InkGameSystem";

};
RED4EXT_ASSERT_SIZE(InkGameSystem, 0x48);
} // namespace game::ui
using gameuiInkGameSystem = game::ui::InkGameSystem;
using InkGameSystem = game::ui::InkGameSystem;
} // namespace RED4ext

// clang-format on
