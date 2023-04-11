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
struct ComponentsStateSaveComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameComponentsStateSaveComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ComponentsStateSaveComponent, 0x90);
} // namespace game
using gameComponentsStateSaveComponent = game::ComponentsStateSaveComponent;
} // namespace RED4ext

// clang-format on
