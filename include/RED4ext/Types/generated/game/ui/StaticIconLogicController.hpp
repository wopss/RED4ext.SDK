#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/ui/DynamicIconLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct StaticIconLogicController : game::ui::DynamicIconLogicController
{
    static constexpr const char* NAME = "gameuiStaticIconLogicController";
    static constexpr const char* ALIAS = NAME;

    TweakDBID iconReference; // 68
};
RED4EXT_ASSERT_SIZE(StaticIconLogicController, 0x70);
} // namespace game::ui
} // namespace RED4ext
