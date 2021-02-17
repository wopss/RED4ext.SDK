#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/mounting/MountableComponent.hpp>

namespace RED4ext
{
namespace game { 
struct ObjectMountableComponent : game::mounting::MountableComponent
{
    static constexpr const char* NAME = "gameObjectMountableComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ObjectMountableComponent, 0x98);
} // namespace game
} // namespace RED4ext
