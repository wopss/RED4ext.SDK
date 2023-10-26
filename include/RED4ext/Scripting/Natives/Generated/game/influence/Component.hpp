#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game::influence
{
struct __declspec(align(0x10)) Component : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameinfluenceComponent";
    static constexpr const char* ALIAS = "InfluenceComponent";

    uint8_t unk120[0x450 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(Component, 0x450);
} // namespace game::influence
using gameinfluenceComponent = game::influence::Component;
using InfluenceComponent = game::influence::Component;
} // namespace RED4ext

// clang-format on
