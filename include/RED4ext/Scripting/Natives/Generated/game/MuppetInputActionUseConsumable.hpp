#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMuppetInputAction.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetInputActionUseConsumable : game::IMuppetInputAction
{
    static constexpr const char* NAME = "gameMuppetInputActionUseConsumable";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MuppetInputActionUseConsumable, 0x8);
} // namespace game
using gameMuppetInputActionUseConsumable = game::MuppetInputActionUseConsumable;
} // namespace RED4ext

// clang-format on
