#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct PlayerControlledComponent : ent::IComponent
{
    static constexpr const char* NAME = "gamePlayerControlledComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x98 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(PlayerControlledComponent, 0x98);
} // namespace game
using gamePlayerControlledComponent = game::PlayerControlledComponent;
} // namespace RED4ext

// clang-format on
