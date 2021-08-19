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
    static constexpr const char* ALIAS = NAME;

    uint8_t unkC0[0xC8 - 0xC0]; // C0
    ink::ImageWidgetReference image; // C8
};
RED4EXT_ASSERT_SIZE(ContraPlatform, 0xE0);
} // namespace game::ui
} // namespace RED4ext
