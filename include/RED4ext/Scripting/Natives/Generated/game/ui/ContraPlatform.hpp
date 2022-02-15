#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ContraPlatform : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiContraPlatform";
    static constexpr const char* ALIAS = "ContraPlatform";

    uint8_t unkD0[0xD8 - 0xD0]; // D0
    ink::ImageWidgetReference image; // D8
};
RED4EXT_ASSERT_SIZE(ContraPlatform, 0xF0);
} // namespace game::ui
using ContraPlatform = game::ui::ContraPlatform;
} // namespace RED4ext
