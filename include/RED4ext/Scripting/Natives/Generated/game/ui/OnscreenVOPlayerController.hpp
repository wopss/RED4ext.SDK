#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/VOWithDelay.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace game::ui
{
struct OnscreenVOPlayerController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiOnscreenVOPlayerController";
    static constexpr const char* ALIAS = NAME;

    RaRef<ink::WidgetLibraryResource> subtitlesLibraryResource; // E0
    CName subtitlesRootName; // E8
    ink::CompoundWidgetReference subtitlesContainer; // F0
    uint8_t unk108[0x138 - 0x108]; // 108
    DynArray<game::ui::VOWithDelay> audioVOList; // 138
    uint8_t unk148[0x150 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(OnscreenVOPlayerController, 0x150);
} // namespace game::ui
using gameuiOnscreenVOPlayerController = game::ui::OnscreenVOPlayerController;
} // namespace RED4ext

// clang-format on
