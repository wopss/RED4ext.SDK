#pragma once

// clang-format off

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

namespace game::ui
{
struct AppearanceInfo : game::ui::CharacterCustomizationInfo
{
    static constexpr const char* NAME = "gameuiAppearanceInfo";
    static constexpr const char* ALIAS = NAME;

    RaRef<appearance::AppearanceResource> resource; // C0
    DynArray<game::ui::IndexedAppearanceDefinition> definitions; // C8
    bool useThumbnails; // D8
    uint8_t unkD9[0xE0 - 0xD9]; // D9
};
RED4EXT_ASSERT_SIZE(AppearanceInfo, 0xE0);
} // namespace game::ui
using gameuiAppearanceInfo = game::ui::AppearanceInfo;
} // namespace RED4ext

// clang-format on
