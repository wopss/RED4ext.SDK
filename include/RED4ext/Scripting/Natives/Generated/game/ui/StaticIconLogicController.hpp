#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/DynamicIconLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct StaticIconLogicController : game::ui::DynamicIconLogicController
{
    static constexpr const char* NAME = "gameuiStaticIconLogicController";
    static constexpr const char* ALIAS = NAME;

    TweakDBID iconReference; // 78
};
RED4EXT_ASSERT_SIZE(StaticIconLogicController, 0x80);
} // namespace game::ui
using gameuiStaticIconLogicController = game::ui::StaticIconLogicController;
} // namespace RED4ext

// clang-format on
