#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/CResource.hpp>
#include <RED4ext/Types/generated/game/ui/CharacterCustomizationUiPresetInfo.hpp>
#include <RED4ext/Types/generated/game/ui/OptionsGroup.hpp>
#include <RED4ext/Types/generated/game/ui/PerspectiveInfo.hpp>

namespace RED4ext
{
namespace game::ui { struct CharacterCustomizationInfo; }

namespace game::ui { 
struct CharacterCustomizationInfoResource : CResource
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationInfoResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::ui::CharacterCustomizationInfo>> headCustomizationOptions; // 40
    DynArray<Handle<game::ui::CharacterCustomizationInfo>> bodyCustomizationOptions; // 50
    DynArray<Handle<game::ui::CharacterCustomizationInfo>> armsCustomizationOptions; // 60
    DynArray<game::ui::OptionsGroup> headGroups; // 70
    DynArray<game::ui::OptionsGroup> bodyGroups; // 80
    DynArray<game::ui::OptionsGroup> armsGroups; // 90
    DynArray<game::ui::PerspectiveInfo> perspectiveInfo; // A0
    DynArray<game::ui::CharacterCustomizationUiPresetInfo> uiPresets; // B0
    DynArray<CName> excludedFromRandomize; // C0
    uint32_t version; // D0
    uint8_t unkD4[0xD8 - 0xD4]; // D4
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationInfoResource, 0xD8);
} // namespace game::ui
} // namespace RED4ext
