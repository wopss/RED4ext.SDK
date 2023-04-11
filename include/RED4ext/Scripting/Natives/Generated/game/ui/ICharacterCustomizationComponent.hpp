#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ICharacterCustomizationComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameuiICharacterCustomizationComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x98 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(ICharacterCustomizationComponent, 0x98);
} // namespace game::ui
using gameuiICharacterCustomizationComponent = game::ui::ICharacterCustomizationComponent;
} // namespace RED4ext

// clang-format on
