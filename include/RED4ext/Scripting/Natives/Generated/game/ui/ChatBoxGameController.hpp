#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ChatBoxGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiChatBoxGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkF8[0x100 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(ChatBoxGameController, 0x100);
} // namespace game::ui
using gameuiChatBoxGameController = game::ui::ChatBoxGameController;
} // namespace RED4ext

// clang-format on
