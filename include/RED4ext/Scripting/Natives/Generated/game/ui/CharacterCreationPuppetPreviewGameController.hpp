#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PuppetPreviewGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CharacterCreationPuppetPreviewGameController : game::ui::PuppetPreviewGameController
{
    static constexpr const char* NAME = "gameuiCharacterCreationPuppetPreviewGameController";
    static constexpr const char* ALIAS = NAME;

    CName maleSceneName; // 1C0
    CName femaleSceneName; // 1C8
    NodeRef maleCamera01Ref; // 1D0
    NodeRef femaleCamera01Ref; // 1D8
    ink::CompoundWidgetReference root; // 1E0
    ink::ImageWidgetReference image; // 1F8
    ink::WidgetLibraryReference animLib; // 210
    CName animName; // 220
    uint8_t unk228[0x248 - 0x228]; // 228
};
RED4EXT_ASSERT_SIZE(CharacterCreationPuppetPreviewGameController, 0x248);
} // namespace game::ui
} // namespace RED4ext
