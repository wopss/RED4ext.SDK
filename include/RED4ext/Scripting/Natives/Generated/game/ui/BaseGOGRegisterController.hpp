#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BaseGOGRegisterController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiBaseGOGRegisterController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x90 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(BaseGOGRegisterController, 0x90);
} // namespace game::ui
} // namespace RED4ext
