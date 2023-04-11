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
struct ObjectMountableComponent : game::mounting::MountableComponent
{
    static constexpr const char* NAME = "gameObjectMountableComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ObjectMountableComponent, 0x98);
} // namespace game
using gameObjectMountableComponent = game::ObjectMountableComponent;
} // namespace RED4ext

// clang-format on
