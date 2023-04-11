#pragma once

// clang-format off

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
namespace game::ui
{
struct CharacterCreationPuppetPreviewGameController : game::ui::PuppetPreviewGameController
{
    static constexpr const char* NAME = "gameuiCharacterCreationPuppetPreviewGameController";
    static constexpr const char* ALIAS = "inkCharacterCreationPuppetPreviewGameController";

    CName maleSceneName; // 1B8
    CName femaleSceneName; // 1C0
    NodeRef maleCamera01Ref; // 1C8
    NodeRef femaleCamera01Ref; // 1D0
    ink::CompoundWidgetReference root; // 1D8
    ink::ImageWidgetReference image; // 1F0
    ink::WidgetLibraryReference animLib; // 208
    CName animName; // 218
    uint8_t unk220[0x240 - 0x220]; // 220
};
RED4EXT_ASSERT_SIZE(CharacterCreationPuppetPreviewGameController, 0x240);
} // namespace game::ui
using gameuiCharacterCreationPuppetPreviewGameController = game::ui::CharacterCreationPuppetPreviewGameController;
using inkCharacterCreationPuppetPreviewGameController = game::ui::CharacterCreationPuppetPreviewGameController;
} // namespace RED4ext

// clang-format on
