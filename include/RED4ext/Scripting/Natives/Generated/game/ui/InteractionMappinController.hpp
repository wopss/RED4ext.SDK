#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinBaseController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) InteractionMappinController : game::ui::MappinBaseController
{
    static constexpr const char* NAME = "gameuiInteractionMappinController";
    static constexpr const char* ALIAS = "BaseInteractionMappinController";

    uint8_t unk1E0[0x270 - 0x1E0]; // 1E0
    CName canvasWidgetName; // 270
    uint8_t unk278[0x288 - 0x278]; // 278
    CName arrowWidgetName; // 288
    uint8_t unk290[0x2A0 - 0x290]; // 290
    bool isCurrentlyClamped; // 2A0
    bool isUnderCrosshair; // 2A1
    uint8_t unk2A2[0x2C0 - 0x2A2]; // 2A2
};
RED4EXT_ASSERT_SIZE(InteractionMappinController, 0x2C0);
} // namespace game::ui
using gameuiInteractionMappinController = game::ui::InteractionMappinController;
using BaseInteractionMappinController = game::ui::InteractionMappinController;
} // namespace RED4ext

// clang-format on
