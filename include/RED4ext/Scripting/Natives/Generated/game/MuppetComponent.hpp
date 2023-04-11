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
struct MuppetComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameMuppetComponent";
    static constexpr const char* ALIAS = "MuppetComponent";

};
RED4EXT_ASSERT_SIZE(MuppetComponent, 0x90);
} // namespace game
using gameMuppetComponent = game::MuppetComponent;
using MuppetComponent = game::MuppetComponent;
} // namespace RED4ext

// clang-format on
