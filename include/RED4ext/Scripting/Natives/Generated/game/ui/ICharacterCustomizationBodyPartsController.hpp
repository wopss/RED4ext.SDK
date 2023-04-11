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
struct ICharacterCustomizationBodyPartsController : game::ui::ICharacterCustomizationComponent
{
    static constexpr const char* NAME = "gameuiICharacterCustomizationBodyPartsController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ICharacterCustomizationBodyPartsController, 0x98);
} // namespace game::ui
using gameuiICharacterCustomizationBodyPartsController = game::ui::ICharacterCustomizationBodyPartsController;
} // namespace RED4ext

// clang-format on
