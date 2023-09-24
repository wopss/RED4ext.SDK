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
struct BreachFinderComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameBreachFinderComponent";
    static constexpr const char* ALIAS = "BreachFinderComponent";

    uint8_t unk90[0x2F8 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(BreachFinderComponent, 0x2F8);
} // namespace game
using gameBreachFinderComponent = game::BreachFinderComponent;
using BreachFinderComponent = game::BreachFinderComponent;
} // namespace RED4ext

// clang-format on
