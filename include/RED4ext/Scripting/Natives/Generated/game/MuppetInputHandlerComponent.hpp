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
struct MuppetInputHandlerComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameMuppetInputHandlerComponent";
    static constexpr const char* ALIAS = "MuppetInputHandlerComponent";

};
RED4EXT_ASSERT_SIZE(MuppetInputHandlerComponent, 0x90);
} // namespace game
using gameMuppetInputHandlerComponent = game::MuppetInputHandlerComponent;
using MuppetInputHandlerComponent = game::MuppetInputHandlerComponent;
} // namespace RED4ext

// clang-format on
