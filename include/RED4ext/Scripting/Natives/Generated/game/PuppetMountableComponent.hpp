#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/MountableComponent.hpp>

namespace RED4ext
{
namespace game
{
struct PuppetMountableComponent : game::mounting::MountableComponent
{
    static constexpr const char* NAME = "gamePuppetMountableComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0xB0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(PuppetMountableComponent, 0xB0);
} // namespace game
using gamePuppetMountableComponent = game::PuppetMountableComponent;
} // namespace RED4ext

// clang-format on
