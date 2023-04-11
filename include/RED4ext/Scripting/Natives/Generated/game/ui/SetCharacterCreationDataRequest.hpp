#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationAttribute.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SetCharacterCreationDataRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameuiSetCharacterCreationDataRequest";
    static constexpr const char* ALIAS = NAME;

    TweakDBID lifepath; // 58
    DynArray<game::ui::CharacterCustomizationAttribute> attributes; // 60
};
RED4EXT_ASSERT_SIZE(SetCharacterCreationDataRequest, 0x70);
} // namespace game::ui
using gameuiSetCharacterCreationDataRequest = game::ui::SetCharacterCreationDataRequest;
} // namespace RED4ext

// clang-format on
