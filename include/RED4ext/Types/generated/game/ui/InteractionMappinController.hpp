#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/ui/MappinBaseController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct InteractionMappinController : game::ui::MappinBaseController
{
    static constexpr const char* NAME = "gameuiInteractionMappinController";
    static constexpr const char* ALIAS = "BaseInteractionMappinController";

    uint8_t unk1C8[0x260 - 0x1C8]; // 1C8
    CName canvasWidgetName; // 260
    uint8_t unk268[0x278 - 0x268]; // 268
    CName arrowWidgetName; // 278
    uint8_t unk280[0x290 - 0x280]; // 280
    bool isCurrentlyClamped; // 290
    bool isUnderCrosshair; // 291
    uint8_t unk292[0x2A0 - 0x292]; // 292
};
RED4EXT_ASSERT_SIZE(InteractionMappinController, 0x2A0);
} // namespace game::ui
using BaseInteractionMappinController = game::ui::InteractionMappinController;
} // namespace RED4ext
