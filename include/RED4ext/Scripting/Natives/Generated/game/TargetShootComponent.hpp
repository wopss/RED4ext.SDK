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
struct __declspec(align(0x10)) TargetShootComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameTargetShootComponent";
    static constexpr const char* ALIAS = "TargetShootComponent";

    uint8_t unk90[0x270 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(TargetShootComponent, 0x270);
} // namespace game
using gameTargetShootComponent = game::TargetShootComponent;
using TargetShootComponent = game::TargetShootComponent;
} // namespace RED4ext

// clang-format on
