#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/ui/VOWithDelay.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace game::ui { 
struct OnscreenVOPlayerController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiOnscreenVOPlayerController";
    static constexpr const char* ALIAS = NAME;

    RaRef<ink::WidgetLibraryResource> subtitlesLibraryResource; // D0
    CName subtitlesRootName; // D8
    ink::CompoundWidgetReference subtitlesContainer; // E0
    uint8_t unkF8[0x128 - 0xF8]; // F8
    DynArray<game::ui::VOWithDelay> audioVOList; // 128
    uint8_t unk138[0x140 - 0x138]; // 138
};
RED4EXT_ASSERT_SIZE(OnscreenVOPlayerController, 0x140);
} // namespace game::ui
} // namespace RED4ext
