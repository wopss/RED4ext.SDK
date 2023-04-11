#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace game
{
struct EntityStubComponent : game::Component
{
    static constexpr const char* NAME = "gameEntityStubComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EntityStubComponent, 0xA8);
} // namespace game
using gameEntityStubComponent = game::EntityStubComponent;
} // namespace RED4ext

// clang-format on
