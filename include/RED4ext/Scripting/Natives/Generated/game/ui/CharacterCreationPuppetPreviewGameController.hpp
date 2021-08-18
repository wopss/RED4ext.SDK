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
    static constexpr const char* ALIAS = "inkCharacterCreationPuppetPreviewGameController";

    CName maleSceneName; // 1B0
    CName femaleSceneName; // 1B8
    NodeRef maleCamera01Ref; // 1C0
    NodeRef femaleCamera01Ref; // 1C8
    ink::CompoundWidgetReference root; // 1D0
    ink::ImageWidgetReference image; // 1E8
    ink::WidgetLibraryReference animLib; // 200
    CName animName; // 210
    uint8_t unk218[0x238 - 0x218]; // 218
};
RED4EXT_ASSERT_SIZE(CharacterCreationPuppetPreviewGameController, 0x238);
} // namespace game::ui
using inkCharacterCreationPuppetPreviewGameController = game::ui::CharacterCreationPuppetPreviewGameController;
} // namespace RED4ext
