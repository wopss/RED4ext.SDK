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
struct BaseGOGRegisterController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiBaseGOGRegisterController";
    static constexpr const char* ALIAS = "BaseGOGRegisterController";

    uint8_t unk78[0xA0 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(BaseGOGRegisterController, 0xA0);
} // namespace game::ui
using gameuiBaseGOGRegisterController = game::ui::BaseGOGRegisterController;
using BaseGOGRegisterController = game::ui::BaseGOGRegisterController;
} // namespace RED4ext

// clang-format on
