#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ChatBoxGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiChatBoxGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE8[0xF0 - 0xE8]; // E8
};
RED4EXT_ASSERT_SIZE(ChatBoxGameController, 0xF0);
} // namespace game::ui
} // namespace RED4ext
