#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ICustomizationStateUpdater.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PersonalLinkControllerCustomizationStateUpdater : game::ui::ICustomizationStateUpdater
{
    static constexpr const char* NAME = "gameuiPersonalLinkControllerCustomizationStateUpdater";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(PersonalLinkControllerCustomizationStateUpdater, 0x68);
} // namespace game::ui
using gameuiPersonalLinkControllerCustomizationStateUpdater = game::ui::PersonalLinkControllerCustomizationStateUpdater;
} // namespace RED4ext

// clang-format on
