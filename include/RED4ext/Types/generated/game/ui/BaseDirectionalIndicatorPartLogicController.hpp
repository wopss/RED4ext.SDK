#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BaseDirectionalIndicatorPartLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiBaseDirectionalIndicatorPartLogicController";
    static constexpr const char* ALIAS = "BaseDirectionalIndicatorPartLogicController";

    uint8_t unk68[0xB8 - 0x68]; // 68
    float defaultForwardFovRange; // B8
    float adjustedForwardFovRange; // BC
};
RED4EXT_ASSERT_SIZE(BaseDirectionalIndicatorPartLogicController, 0xC0);
} // namespace game::ui
using BaseDirectionalIndicatorPartLogicController = game::ui::BaseDirectionalIndicatorPartLogicController;
} // namespace RED4ext
