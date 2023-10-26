#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) BaseDirectionalIndicatorPartLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiBaseDirectionalIndicatorPartLogicController";
    static constexpr const char* ALIAS = "BaseDirectionalIndicatorPartLogicController";

    uint8_t unk78[0xC8 - 0x78]; // 78
    float defaultForwardFovRange; // C8
    float adjustedForwardFovRange; // CC
};
RED4EXT_ASSERT_SIZE(BaseDirectionalIndicatorPartLogicController, 0xD0);
} // namespace game::ui
using gameuiBaseDirectionalIndicatorPartLogicController = game::ui::BaseDirectionalIndicatorPartLogicController;
using BaseDirectionalIndicatorPartLogicController = game::ui::BaseDirectionalIndicatorPartLogicController;
} // namespace RED4ext

// clang-format on
