#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CensorshipInfo.hpp>

namespace RED4ext
{
namespace appearance { struct AppearanceResource; }

namespace game::ui
{
struct CustomizationAppearance : game::ui::CensorshipInfo
{
    static constexpr const char* NAME = "gameuiCustomizationAppearance";
    static constexpr const char* ALIAS = NAME;

    CName name; // 10
    RaRef<appearance::AppearanceResource> resource; // 18
    CName definition; // 20
};
RED4EXT_ASSERT_SIZE(CustomizationAppearance, 0x28);
} // namespace game::ui
using gameuiCustomizationAppearance = game::ui::CustomizationAppearance;
} // namespace RED4ext

// clang-format on
