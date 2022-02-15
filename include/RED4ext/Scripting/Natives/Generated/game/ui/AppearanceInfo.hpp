#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/IndexedAppearanceDefinition.hpp>

namespace RED4ext
{
namespace appearance { struct AppearanceResource; }

namespace game::ui { 
struct AppearanceInfo : game::ui::CharacterCustomizationInfo
{
    static constexpr const char* NAME = "gameuiAppearanceInfo";
    static constexpr const char* ALIAS = NAME;

    RaRef<appearance::AppearanceResource> resource; // B8
    DynArray<game::ui::IndexedAppearanceDefinition> definitions; // C0
    bool useThumbnails; // D0
    uint8_t unkD1[0xD8 - 0xD1]; // D1
};
RED4EXT_ASSERT_SIZE(AppearanceInfo, 0xD8);
} // namespace game::ui
} // namespace RED4ext
