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
struct MultiEcsManagerComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameMultiEcsManagerComponent";
    static constexpr const char* ALIAS = "MultiEcsManagerComponent";

    uint8_t unk90[0xC0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MultiEcsManagerComponent, 0xC0);
} // namespace game
using gameMultiEcsManagerComponent = game::MultiEcsManagerComponent;
using MultiEcsManagerComponent = game::MultiEcsManagerComponent;
} // namespace RED4ext

// clang-format on
