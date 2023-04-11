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
struct TargetingActivatorComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameTargetingActivatorComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TargetingActivatorComponent, 0x90);
} // namespace game
using gameTargetingActivatorComponent = game::TargetingActivatorComponent;
} // namespace RED4ext

// clang-format on
