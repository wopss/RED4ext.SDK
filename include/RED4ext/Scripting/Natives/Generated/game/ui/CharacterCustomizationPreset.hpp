#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CustomizationGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PerspectiveInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationPreset : CResource
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationPreset";
    static constexpr const char* ALIAS = NAME;

    bool isMale; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    DynArray<game::ui::CustomizationGroup> bodyGroups; // 48
    DynArray<game::ui::CustomizationGroup> headGroups; // 58
    DynArray<game::ui::CustomizationGroup> armsGroups; // 68
    DynArray<game::ui::PerspectiveInfo> perspectiveInfo; // 78
    red::TagList tags; // 88
    uint32_t version; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationPreset, 0xA0);
} // namespace game::ui
using gameuiCharacterCustomizationPreset = game::ui::CharacterCustomizationPreset;
} // namespace RED4ext

// clang-format on
