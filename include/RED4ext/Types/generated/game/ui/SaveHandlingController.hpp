#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SaveHandlingController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiSaveHandlingController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0x120 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(SaveHandlingController, 0x120);
} // namespace game::ui
} // namespace RED4ext
