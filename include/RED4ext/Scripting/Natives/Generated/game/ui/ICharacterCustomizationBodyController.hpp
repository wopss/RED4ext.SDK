#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ICharacterCustomizationComponent.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ICharacterCustomizationBodyController : game::ui::ICharacterCustomizationComponent
{
    static constexpr const char* NAME = "gameuiICharacterCustomizationBodyController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ICharacterCustomizationBodyController, 0x98);
} // namespace game::ui
using gameuiICharacterCustomizationBodyController = game::ui::ICharacterCustomizationBodyController;
} // namespace RED4ext

// clang-format on
